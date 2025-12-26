# Lamb-rust

Inspired by [lamb](https://github.com/tsoding/lamb) from [TSoding](https://github.com/tsoding)

## Examples

```
λ> :debug \f.(\x.f (x x)) (\x.f (x x))
!> Debugging: λf.(λx.(f (x x)) λx.(f (x x)))
   Press <Enter> to step eval or type 'quit' to quit.

#> λf.(λx.(f (x x)) λx.(f (x x)))
->
#> λf.(f (λx.(f (x x)) λx.(f (x x))))
->
#> λf.(f (f (λx.(f (x x)) λx.(f (x x)))))
->
#> λf.(f (f (f (λx.(f (x x)) λx.(f (x x))))))
->
#> λf.(f (f (f (f (λx.(f (x x)) λx.(f (x x)))))))
->
#> λf.(f (f (f (f (f (λx.(f (x x)) λx.(f (x x))))))))
->
#> λf.(f (f (f (f (f (f (λx.(f (x x)) λx.(f (x x)))))))))
->
#> λf.(f (f (f (f (f (f (f (λx.(f (x x)) λx.(f (x x))))))))))
->
#> λf.(f (f (f (f (f (f (f (f (λx.(f (x x)) λx.(f (x x)))))))))))
->
#> λf.(f (f (f (f (f (f (f (f (f (λx.(f (x x)) λx.(f (x x))))))))))))
```

## Quick Start

To run use `$ cargo run` in console.

## Syntax

- Syntax is based on untyped Lambda calculus

## Commands

- `:quit` To exit from REPL
- `:ast <expr>` To render AST of the expression
- `:debug <expr>` Step-by-step evaluation of the expression
