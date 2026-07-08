# 🏗️ OOP Projects (C++)

A collection of C++ projects built to practice and demonstrate core **Object-Oriented Programming** concepts including class design, inheritance, encapsulation, static methods, and file I/O.

---

## 📁 Projects Overview

### 🔐 Utility Library (`utility-library/` → `clsUtil`)
A reusable utility class for random data generation and basic encryption.

**Key Features:**
- Generate random characters (small, capital, digit, special, or mixed)
- Generate random words and license-style keys (e.g. `aB3x-Kp2m-9Wqz-Lm4T`)
- Fill arrays with random numbers, words, or keys
- Basic text decryption using a shift key

**Concepts:** Static methods, enums, char/ASCII manipulation

---

### ✅ Input & Validation Library (`input-validation/` → `cls_Input_Validation`)
A robust input validation utility class that prevents crashes from bad user input.

**Key Features:**
- Safe integer, double, and float reading with automatic retry on invalid input
- Range validation (`Read_Int_Num_Between`, `Read_Double_Num_Between`)
- Safe string reading that rejects empty input
- Clears `cin` buffer on failure — no infinite loops

**Concepts:** Static methods, input stream handling, defensive programming

---

### 🏦 Bank Client System (`bank-client-system/` → `clsPerson` → `clsBank_Client`)
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

### 📅 Time & Date Library (`Time Project/` → `clsDate`, `clsPeriod`, `clsString`)
A date-handling and period-comparison library. Based on an existing project I found online and studied — I added features, fixed bugs, and documented it with a table of contents to make it easier to learn from.

**Key Features:**
- Create dates from day/month/year, a string (`"DD/MM/YYYY"`), the system clock, or a day-order-in-year
- Compare dates (`Before` / `After` / `Equal`) via `clsDate::CompareDates`
- `clsPeriod` wraps a start/end date pair and checks whether two periods overlap
- Convert between date formats using the `clsString` helper class

**Concepts:** Static factory methods, operator-style comparisons via enums, class composition (`clsPeriod` uses `clsDate`, `clsDate` uses `clsString`)

**Class Relationship:**
```
clsPeriod
    └── uses clsDate
            └── uses clsString
```

---

## 🛠️ How to Build & Run

### Requirements
- C++ compiler (g++ / MSVC / Clang)
- C++11 or later

### Compile (example for Bank Client System)
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
| Static methods & utility classes | Utility Library, Input & Validation |
| Encapsulation (private/public) | All |
| Inheritance | Bank Client System |
| Class composition | Time & Date Library |
| File I/O (`fstream`) | Bank Client System |
| Enum modes & state management | Utility Library, Bank Client System, Time & Date Library |
| Defensive input handling | Input & Validation, Bank Client System |

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).
