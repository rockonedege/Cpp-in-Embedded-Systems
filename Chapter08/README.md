# Chapter 8: Building Generic and Reusable Code with Templates

Standalone examples on templates. You can explore them in
[Compiler Explorer](https://godbolt.org/).

The folder contains following examples:
- `template_function.cpp` — function template basics
- `template_function_point.cpp` — function template with a user-defined type
- `template_specialization.cpp` — template specialization
- `tmpt_enable_if.cpp` — constraining templates with `std::enable_if`
- `tmpt_concepts.cpp` — constraining templates with concepts
- `tmpt_crtp.cpp` — static polymorphism with CRTP

Note: `tmpt_enable_if.cpp` and `tmpt_concepts.cpp` contain a call that
intentionally fails to compile, to show the resulting compiler errors.
