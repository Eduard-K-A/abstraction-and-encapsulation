# 💰 C++ Abstract Banking Simulator

A simple C++ console application designed to demonstrate key Object-Oriented Programming (OOP) concepts, primarily **Abstraction**, **Inheritance**, and **Polymorphism**, through the simulation of a basic banking system.

This project allows the user to interact with two different types of bank accounts: **Savings** and **Current**.

## ✨ Features & OOP Concepts

The project structure is explicitly built to illustrate modern C++ OOP principles:

* **Abstraction (via Abstract Class)**: The `BankAccount` class is an abstract base class (containing pure virtual functions) that defines a common interface (`deposit`, `withdraw`, `displayBalance`) for all account types, hiding the specific implementation details from the user interface logic.
* **Inheritance**: The `SavingsAccount` and `CurrentAccount` classes inherit from the `BankAccount` base class, receiving the common logic (like `deposit`) while implementing their own specific behaviors.
* **Polymorphism (via Virtual Functions)**: The `withdraw` and `displayBalance` methods are virtual, allowing different derived classes (Savings vs. Current) to implement these operations uniquely while being called through a base class pointer or reference (though direct object instantiation is used in `main`).
* **Encapsulation**: The account `balance` is declared as a `protected` member in the base class, limiting direct manipulation and ensuring all balance changes are handled only through the defined public methods (`deposit` and `withdraw`).
* **Input Validation**: Includes a templated `getValidInput` function to robustly handle numeric input, preventing crashes from non-numeric entry.

---

## 🏗️ Code Structure Overview

The entire application is contained in a single file, with clearly defined classes:

| Class/Function | Type | Purpose |
| :--- | :--- | :--- |
| **`BankAccount`** | **Abstract Base Class** | Defines the minimum required interface for any bank account (Abstraction). Holds the `balance` (Encapsulation). |
| **`SavingsAccount`** | Derived Class | Implements a standard savings account. |
| **`CurrentAccount`** | Derived Class | Implements a standard current/checking account. |
| **`subMenu()`** | Function | Displays the common menu options for all accounts. |
| **`getValidInput<T>()`** | Templated Function | Robustly handles and validates user input for numeric data. |
| **`main()`** | Main Logic | Manages the primary application flow, account initialization, and user interactions. |

---

## ⚙️ Getting Started

### Prerequisites

You need a C++ compiler installed on your system that supports at least C++11 (GCC/G++ or Clang recommended).

### Compilation

1.  Save the code provided into a single file named, for example, `banking_app.cpp`.
2.  Open your terminal or command prompt.
3.  Navigate to the directory where you saved the file.
4.  Compile the code using your C++ compiler:

    ```bash
    g++ banking_app.cpp -o banking_app
    ```

### Running the Application

Execute the compiled program from the terminal:

```bash
./banking_app
