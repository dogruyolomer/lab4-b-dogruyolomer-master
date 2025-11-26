[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/87p1Nyh4)

# C Programming Exercises Project – Rounding Functions & Perfect Numbers)


This repository contains three structured exercises designed to help you understand **function design**, 
**header/source separation**, **mathematical logic**, and**number theory**. 
You will progressively move from writing function declarations, to writing implementations, 
and finally to integrating logic inside a complete program.
---

# 📘 Exercise 1 & 2 — Introduction
In the next two exercises, you will be writing rounding functions. In order to implement rounding nearest integer,
you will be using floor() function from math.h. For example The statement
y = floor(x + .5);
rounds x to the nearest integer and assigns the result to y. Function floor may be used to round a number 
to a specific decimal place.
For example, When we are rounding Pi (3.1415) to 
| Decimal Place        | Result |
|----------------------|--------|
| Nearest integer      | 3      |
| Nearest tenth        | 3.1    |
| Nearest hundredth    | 3.14   |
| Nearest thousandth   | 3.142  |

The statement
y = floor(x * 10 + .5) / 10;
rounds x to the tenths position (the first position to the right of the decimal point).
The statement
y = floor(x * 100 + .5) / 100;
rounds x to the hundredths position (the second position to the right of the decimal
point).  

In following exercises, you will be declaring and then writing the following functions:

a\. roundToInteger(number)  
b\. roundToTenths(number)  
c\. roundToHundreths(number)  
d\. roundToThousandths(number)

For each value the program inputs, display the original value, the number rounded to
the nearest integer, the number rounded to the nearest tenth, the number rounded to
the nearest hundredth, and the number rounded to the nearest thousandth.


---

# 📘 Exercise 1 — Writing Function Prototypes (rounding.h)

In this exercise, you will fill **rounding.h** ,a **header file**,to contain the *declarations* of four rounding functions.  
You must NOT implement them yet — only describe **what** the functions look like. For each of functions think what would be their 
parameters and their return data type.

### Your Task
Create a file named **rounding.h** that:


- Declares four functions that each take a floating‑point value  
- Each function should round a number to a different precision:
  - to the nearest integer  
  - to the nearest tenth  
  - to the nearest hundredth  
  - to the nearest thousandth  

You must determine:
- The correct return type  
- The correct parameter list  
- The correct naming format based on the descriptions  

👉 **No function bodies are allowed in this part.**  
👉 **Do NOT include math.h here.**

---

# 📗 Exercise 2 — Implementing Rounding Functions (rounding.c)

In this exercise, you will be working on **rounding.c**. Implement the four functions that you previously **declared** in the header file.

### Rounding Logic
You must use the following mathematical rounding technique:

### Requirements
- Include `math.h`
- Include your own header file
- Match your prototypes exactly
- Do not print anything in these functions

---

# 📙 Exercise 3 — Perfect Numbers (perfect.c)

A **perfect number** is a number that equals the sum of its proper divisors.  
Examples:

- 6 → 1 + 2 + 3 = 6  
- 28 → 1 + 2 + 4 + 7 + 14 = 28  

### Your Tasks
1. Write a helper function that determines whether a number is perfect  
2. Write a full program that:
   - Asks the user for an upper bound `n`
   - Prints all perfect numbers from **1 to n**

### Tips & Hints
- Only check divisors up to `n/2`
- Skip `n` itself — it is NOT a proper divisor  
- Return a boolean-like value (integer)

Sample Output:
```
Enter upper bound: 100
Perfect numbers up to 100:
6
28
100
```



---

# 📦 Project Structure

```
README.md
rounding.h
rounding.c
perfect.c
CMakeLists.txt
```

---

# 🎯 Learning Goals

By completing all parts, you will understand:

- Function prototypes vs definitions  
- Modular C programming  
- Header files and include guards  
- Math library usage  
- Importance of separation of concerns  
- CMake build process  
- Numerical algorithm design  
- Efficient divisor checking  
