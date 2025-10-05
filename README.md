# 🏦 C++ OOP Banking System Simulator

A C++ console application designed to demonstrate fundamental Object-Oriented Programming (OOP) concepts—specifically **Abstraction** and **Encapsulation**—by simulating a basic banking account management system with **CRUD** (Create, Read, Update, Delete) operations.

## 🎯 Project Goals

This project serves as an educational tool to showcase:

1.  **Encapsulation**: Protecting internal account data (e.g., balance, account number) from direct, unauthorized external access.
2.  **Abstraction**: Providing a simple, controlled interface (public methods like `deposit()`, `withdraw()`) to hide the complex underlying logic.
3.  **CRUD Operations**: Implementing the core functions necessary for any data management system:
    * **C**reate a new account.
    * **R**ead/View account details and balance.
    * **U**pdate the account balance (via deposit/withdrawal).
    * **D**elete/Close an account.

---

## 🛠️ Technology Stack

* **Language**: C++ (C++11 or newer)
* **Compiler**: GCC/G++ or Clang
* **Environment**: Console/Terminal application

---

## 🏗️ Program Structure

The system is primarily built around the `Account` class, ensuring strong encapsulation and clear abstraction.

| File / Class | Role & OOP Principle | Description |
| :--- | :--- | :--- |
| **`Account.h`** | **Abstraction & Encapsulation** | Declares the `Account` class. Defines private members (data) and public methods (interface) like `deposit()` and `withdraw()`. |
| **`Account.cpp`** | Implementation | Contains the definition and logic for all `Account` class methods. |
| **`main.cpp`** | Control Logic | Handles the main application loop, displays the menu, and manages the interaction flow between the user and the `Account` objects. |
| **`data/`** (or similar) | Persistence | Directory/File used for storing simulated account data (e.g., `accounts.dat`). |

### 🔒 Encapsulation Example

Internal state variables (like `balance` and `accountNumber`) are declared as **private** members within the `Account` class, preventing direct modification. Access is only possible via public, controlled **setter** and **getter** methods.

### 💡 Abstraction Example

The user interacts with a simple `withdraw(amount)` function without needing to know the complex internal checks (e.g., verifying sufficient balance, updating the file record, logging the transaction).

---

## ⚙️ Getting Started

### Prerequisites

You need a C++ compiler installed on your system (GCC/G++ recommended).

```bash
# Check if g++ is installed
g++ --version
