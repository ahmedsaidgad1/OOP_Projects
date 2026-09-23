# 🏗️ OOP Projects — C++

A collection of C++ projects built to practice and demonstrate core **Object-Oriented Programming** concepts and software design fundamentals.

---

## 📁 Projects Overview

### 🔐 Utility Library (`utility-library/` → `clsUtil`)

A reusable utility class for random data generation and basic encryption.

**Key Features:**
- Generate random characters (small, capital, digit, special, or mixed)
- Generate random words and license-style keys
- Fill arrays with random numbers, words, or keys
- Basic text decryption using a shift key

**Concepts:** Static methods, enums, char/ASCII manipulation

---

### ✅ Input & Validation Library (`input-validation/` → `cls_Input_Validation`)

A reusable input validation utility class designed to handle invalid user input safely.

**Key Features:**
- Safe integer, double, and float reading with automatic retry
- Range validation (`Read_Int_Num_Between`, `Read_Double_Num_Between`)
- Safe string reading that rejects empty input
- Clears the `cin` buffer on invalid input

**Concepts:** Static methods, input stream handling, defensive programming

---

### 🏦 Bank Client System (`bank-client-system/` → `clsPerson` → `clsBank_Client`)

A console-based bank client management system using multi-level OOP design.

**Key Features:**
- Add, find, update, and list bank clients
- Find clients by account number or account number + PIN
- Persistent storage using `Clients.txt`
- Input validation through `cls_Input_Validation`
- Mode-aware saving for add and update operations

**Concepts:** Inheritance, encapsulation, file I/O (`fstream`), static factory methods, enums

**Class Hierarchy:**
```text
clsPerson
    └── clsBank_Client
```

---

### 🧬 OOP Inheritance Demo (`OOP-Inheritance-System/`)

A console-based C++ project demonstrating multi-level inheritance through a `Person → Employee → Developer` hierarchy.

**Key Features:**
- Three-level inheritance hierarchy
- Encapsulation with private data members
- Constructor chaining using initializer lists
- Method overriding through `print()`
- Getters and setters for controlled data access

**Concepts:** Encapsulation, inheritance, constructor chaining, method overriding

**Class Hierarchy:**
```text
clsperson
    └── clsemployee
           └── clsdeveloper
```

---

### 📅 Time & Date Library (`Time Project/` → `clsDate`, `clsPeriod`, `clsString`)

A date-handling and period-comparison library. It was studied from an existing project, then extended with additional features, bug fixes, and documentation.

**Key Features:**
- Create dates from day/month/year, strings, the system clock, or day order
- Compare dates using `clsDate::CompareDates`
- Check whether two periods overlap using `clsPeriod`
- Convert between date formats using `clsString`

**Concepts:** Static factory methods, enums, class composition, date handling

**Class Relationship:**
```text
clsPeriod
    └── uses clsDate
            └── uses clsString
```

---

## 🛠️ How to Build & Run

### Requirements

- C++ compiler such as g++, MSVC, or Clang
- C++11 or later

### Compile

Example for the Bank Client System:

```bash
g++ -o bank_system Main.cpp
```

### Run

```bash
./bank_system
```

> Each project folder is self-contained. Make sure all required header files are available with `Main.cpp` before compiling.

---

## 🧠 OOP Concepts Covered

| Concept | Project |
|---|---|
| Static methods & utility classes | Utility Library |
| Input validation & defensive programming | Input & Validation Library |
| Encapsulation | Bank Client System |
| Inheritance | Bank Client System / OOP Inheritance Demo |
| Constructor chaining | OOP Inheritance Demo |
| Method overriding | OOP Inheritance Demo |
| File I/O | Bank Client System |
| Class composition | Time & Date Library |
| Enums & static methods | Multiple Projects |

---

## 🎯 Learning Goals

This repository represents my C++ and OOP foundation as I continue developing my software engineering skills and moving toward **C# and .NET backend development**.

---

## 📌 Notes

These projects are primarily focused on learning, practicing OOP principles, improving code organization, and building a stronger foundation for future backend development.

