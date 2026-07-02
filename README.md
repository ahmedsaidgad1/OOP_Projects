# 🏗️ OOP Projects (C++)

A collection of C++ projects built to practice and demonstrate core **Object-Oriented Programming** concepts including class design, inheritance, encapsulation, static methods, and file I/O.

---

## 📁 Projects Overview

### Project 1 — 🔐 Utility Library (`clsUtil`)
A reusable utility class for random data generation and basic encryption.

**Key Features:**
- Generate random characters (small, capital, digit, special, or mixed)
- Generate random words and license-style keys (e.g. `aB3x-Kp2m-9Wqz-Lm4T`)
- Fill arrays with random numbers, words, or keys
- Basic text decryption using a shift key

**Concepts:** Static methods, enums, char/ASCII manipulation

---

### Project 2 — ✅ Input & Validation Library (`cls_Input_Validation`)
A robust input validation utility class that prevents crashes from bad user input.

**Key Features:**
- Safe integer, double, and float reading with automatic retry on invalid input
- Range validation (`Read_Int_Num_Between`, `Read_Double_Num_Between`)
- Safe string reading that rejects empty input
- Clears `cin` buffer on failure — no infinite loops

**Concepts:** Static methods, input stream handling, defensive programming

---

### Project 3 — 🏦 Bank Client System (`clsPerson` → `clsBank_Client`)
A full console-based bank client management system using multi-level OOP design.

**Key Features:**
- Add, find, update, and list bank clients
- Find client by account number or account number + PIN
- Persistent storage — reads and writes to `Clients.txt`
- Built-in input validation via `cls_Input_Validation`
- Mode-aware saving (`Add_New_Mode` vs `Update_Mode`)

**Concepts:** Inheritance, encapsulation, file I/O (`fstream`), static factory methods, enum modes

**Class Hierarchy:**
```
clsPerson
    └── clsBank_Client
```

---

## 🛠️ How to Build & Run

### Requirements
- C++ compiler (g++ / MSVC / Clang)
- C++11 or later

### Compile (example for Project 3)
```bash
g++ -o bank_system Main.cpp
```

### Run
```bash
./bank_system
```

> Each project folder is self-contained. Make sure all `.h` files are in the same directory as `Main.cpp` before compiling.

---

## 🧠 OOP Concepts Covered

| Concept | Project |
|---|---|
| Static methods & utility classes | Project 1, 2 |
| Encapsulation (private/public) | All |
| Inheritance | Project 3 |
| File I/O (`fstream`) | Project 3 |
| Enum modes & state management | Project 1, 3 |
| Defensive input handling | Project 2, 3 |

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).
