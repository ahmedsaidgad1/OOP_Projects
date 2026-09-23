# OOP Inheritance Demo (C++)

A console-based C++ project demonstrating core **Object-Oriented Programming** concepts — encapsulation, inheritance, and constructor chaining — through a simple `Person → Employee → Developer` class hierarchy.

## Overview

This project models a multi-level inheritance chain:

```
clsperson
   └── clsemployee
          └── clsdeveloper
```

- **`clsperson`** — base class holding core personal data (ID, name, email, phone) plus simulated communication methods (`SendEmail`, `SendSMS`).
- **`clsemployee`** — inherits from `clsperson`, adds job-related data (title, department, salary).
- **`clsdeveloper`** — inherits from `clsemployee`, adds a specialization field (main programming language).

## Concepts Demonstrated

- **Encapsulation** — all data members are `private`, accessed only through public getters/setters.
- **Inheritance** — a 3-level class hierarchy (`clsperson` → `clsemployee` → `clsdeveloper`).
- **Constructor chaining** — each derived class forwards shared fields to its base class constructor via initializer lists.
- **Method overriding** — `print()` is redefined at each level to display the appropriate set of fields.

## Sample Output

Running the program with a sample `clsdeveloper` object produces:

```
=========>>  Info :  <<=========
________________________________
ID          : 123
FirstName   : Ahmed
LastName    : Gad
Full Name   : Ahmed Gad
Email       : A@a.com
Phone       : 213
Title       : Software Programming
Department  : 11
Salary      : 12
PLanguage   : C++
_______________________________
```

## How to Compile & Run

Requires a C++17-compatible compiler (e.g., `g++`).

```bash
g++ -std=c++17 -Wall -o demo main.cpp
./demo
```

On Windows (with g++ installed):

```bash
g++ -std=c++17 -Wall -o demo.exe main.cpp
demo.exe
```

## Possible Improvements

- Mark non-modifying getter methods as `const`.
- Pass `string` parameters by `const reference` instead of by value.
- Make `print()` `virtual` to support proper polymorphic behavior through base-class pointers/references.
- Reuse `clsemployee::print()` inside `clsdeveloper::print()` instead of duplicating all fields.

## Author

**Ahmed Gad**
GitHub: [@ahmedsaidgad1](https://github.com/ahmedsaidgad1)

## License

This project is licensed under the MIT License — see the [LICENSE](LICENSE) file for details.
