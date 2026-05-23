# ☕ Smart Cafe Ordering System

## 📌 Project Overview
The Smart Cafe Ordering System is a C++ Object-Oriented Programming (OOP) based console application.
It simulates a cafe where customers can view menu, place orders, and generate bills with tax calculation.

This project is developed for Software Construction and Development Lab (Semester 5).

---

## 🎯 Objectives
- Implement Object Oriented Programming (OOP)
- Manage cafe menu dynamically
- Handle customer orders
- Generate billing system
- Apply file handling and exception handling

---

## 🚀 Features

### 🍔 Menu Management
- Add new items (Admin/Staff)
- Remove items
- Categorized menu (Drinks, Fast Food, Desserts)
- Display menu

### 🛒 Order System
- Multiple items per order
- Quantity support
- Remove item from order
- Automatic bill calculation

### 🧾 Billing System
- Subtotal calculation
- 5% tax calculation
- Final total bill

### 👤 Customer System
- Unique Customer ID
- Order history support

### 👨‍💼 Staff/Admin System
- Menu management using inheritance

### 💾 File Handling
- Save menu in `menu.txt`
- Save orders in `orders.txt`
- Load data from files

### ⚠️ Exception Handling
- Empty order check
- File error handling
- Prevent program crash

### 🔍 Extra Features
- Search item by name
- Filter by category
- Discount system (bonus feature)

---

## 📁 Project Structure

SmartCafe1/
├── include/
│   ├── MenuItem.h
│   ├── Order.h
│   ├── Customer.h
│   ├── Staff.h
│   ├── Person.h
├── src/
│   ├── MenuItem.cpp
│   ├── Order.cpp
│   ├── Customer.cpp
│   ├── Staff.cpp
│   ├── Person.cpp
│   ├── main.cpp
├── data/
│   ├── menu.txt
│   ├── orders.txt
├── README.md
└── .gitignore

---

## ▶️ How to Run

Compile:
g++ -std=c++17 src/*.cpp -o SmartCafe1

Run:
SmartCafe1.exe

---

## 🧠 Concepts Used
- OOP (Object Oriented Programming)
- Inheritance
- Composition
- Vectors (STL)
- File Handling
- Exception Handling
- Modular Programming

---

## 📊 Sample Output

------ Smart Cafe ------

Coffee x2 = 700  
Burger x1 = 700  

Subtotal: 1400  
Tax (5%): 70  
Total: 1470  

---

## 👨‍🎓 Author
Software Engineering Student (Semester 5)

---

## 📌 Note
This project demonstrates real-world software design using C++ and OOP principles.
