# 🧮 Simple Calculator in C

## 📘 Overview
This is a simple calculator program written in **C language**.  
It performs basic arithmetic operations such as:
- Addition  
- Subtraction  
- Multiplication  
- Division  
- Remainder  

It uses **functions** for modular programming and **switch case** for operation selection.

---

## ⚙️ Features
✅ Function-based structure for clean code  
✅ User-friendly menu-driven interface  
✅ Handles integer arithmetic operations  
✅ Displays results with proper formatting  

---

## 💻 How the Program Works
1. The program displays a menu of operations.  
2. The user enters two numbers (make sure the first is larger for division and remainder).  
3. The user selects an operation by entering a number from the menu.  
4. The corresponding function executes and displays the result.

---

## 🧩 Functions Used

| Function | Purpose |
|-----------|----------|
| `menu()` | Displays the operation menu |
| `sum(a, b)` | Adds two numbers |
| `sub(a, b)` | Subtracts second number from first |
| `mult(a, b)` | Multiplies two numbers |
| `div(a, b)` | Divides first number by second |
| `rem(a, b)` | Finds remainder of division |

---



---

## 🧑‍💻 Code Structure
The program is divided into two main parts:
- **Function Definitions:** For menu and operations.
- **Main Function:** To handle input, display menu, and call required function using `switch()`.

---

## ⚠️ Note
- Always enter the **first number as larger** when performing **division** or **remainder** operations.
- The division output uses **two decimal places** for better clarity.

---

## 🏁 How to Run
1. Save the file as `calculator.c`
2. Compile the code:
   ```bash
   gcc calculator.c -o calculator
