#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum { EXPR_VAR, EXPR_FUN, EXPR_APP } Expr_Kind;

typedef struct Expr Expr;

typedef struct {
  const char *arg;
  Expr *body;
} Expr_Fun;

struct Expr {
  Expr_Kind kind;
  union {
    const char *var;
    Expr_Fun fun;
    struct {
      Expr *lhs;
      Expr *rhs;
    } app;
  } as;
};

Expr *var(const char *name) {
  Expr *expr = malloc(sizeof(*expr));
  assert(expr != NULL);
  expr->kind = EXPR_VAR;
  expr->as.var = strdup(name);
  return expr;
}

Expr *fun(const char *arg, Expr *body) {
  Expr *expr = malloc(sizeof(*expr));
  assert(expr != NULL);
  expr->kind = EXPR_FUN;
  expr->as.fun.arg = strdup(arg);
  expr->as.fun.body = body;
  return expr;
}

Expr *app(Expr *lhs, Expr *rhs) {
  Expr *expr = malloc(sizeof(*expr));
  assert(expr != NULL);
  expr->kind = EXPR_APP;
  expr->as.app.lhs = lhs;
  expr->as.app.rhs = rhs;
  return expr;
}

// void display_expr(Expr *expr, String_Builder *nb) {
//
// }

int main() {
  Expr *variable = var("aboba");
  printf("Hello World! \n");
  return 0;
}
