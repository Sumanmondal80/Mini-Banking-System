
# 🏦 Mini Banking System (C++)

A command-line based Mini Banking System built using **C++** that simulates core banking operations such as account management, transactions, and secure access using PIN authentication.

---

## 🚀 Features

* 🆕 Create new bank accounts
* 💰 Deposit money
* 💸 Withdraw money
* 🔍 Check account balance
* 🔁 Transfer money between accounts
* 🔐 PIN-based authentication system
* 📜 Transaction history tracking
* 💾 File handling for persistent data storage

---

## 🧠 Tech Stack

* **Language:** C++
* **Concepts Used:**

  * Object-Oriented Programming (OOP)
  * File Handling
  * STL (`vector`, `string`)
  * Input Validation & Error Handling

---

## 📂 Project Structure

```
BankingSystem/
│
├── main.cpp          # Entry point
├── Account.h         # Account class declaration
├── Account.cpp       # Account class implementation
├── Bank.h            # Bank class declaration
├── Bank.cpp          # Bank class implementation
├── Input.h           # Safe input handling functions
├── Input.cpp         # Input logic implementation
├── data.txt          # Stored account data
```

---

## ⚙️ How to Run

### 🔧 Compile

```bash
g++ *.cpp -o bank
```

### ▶️ Run

```bash
./bank
```

*(On Windows use `bank.exe`)*

---

## 📌 Usage

1. Run the program
2. Choose from the menu options:

   * Create Account
   * Deposit / Withdraw
   * Transfer Money
   * Check Balance
   * View Transaction History
3. Enter required details securely using PIN

---

## 🔐 Security Features

* PIN-based authentication for every transaction
* Input validation to prevent invalid entries
* Error handling for safe execution

---

## 💾 Data Persistence

* All account data is stored in `data.txt`
* Automatically loaded at startup
* Saved before exit

---

## ⚠️ Limitations

* CLI-based (no GUI)
* Data stored in plain text (not encrypted)
* Single-user system (no concurrency support)

---

## 🚀 Future Improvements

* 🔒 Encrypt stored data
* 🗄️ Database integration (SQLite/MySQL)
* 🌐 Convert to web application
* 📊 Add analytics dashboard
* 👤 Multi-user authentication system

---

## 📸 Demo

*(You can add screenshots or a Replit link here)*

---

## 📎 Project Links

* GitHub Repo: (https://github.com/Sumanmondal80/Mini-Banking-System)

---

## 🙌 Author

**Suman Mondal**

---

## ⭐ If you like this project

Give it a ⭐ on GitHub and feel free to contribute!
