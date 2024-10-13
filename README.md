# College-Portfolio
This repository contains my C++ projects from NCST.

# My Coding Portfolio

Welcome to my coding portfolio! Here, you'll find a collection of C++ projects I've developed as part of my Computer Science degree. These projects range from simple applications to more advanced implementations, showcasing my growing understanding of programming concepts and problem-solving techniques.

## Projects

### 1. Simple Calculator
**Description**:  
This project is a basic calculator written in C++ that can perform addition, subtraction, multiplication, and division between two numbers entered by the user. It introduces basic input/output handling and arithmetic operations.

**Key Concepts**: Input/output handling, arithmetic operations, basic control flow  
**Technologies**: C++

[Link to the Code](https://github.com/YourUsername/YourRepo/blob/main/simple-calculator.cpp)

---

### 2. Simple Grading System
**Description**:  
This project calculates a student’s average grade based on scores entered for various subjects. The program then determines whether the student has passed or failed based on a grading threshold of 75. It makes use of conditional statements to evaluate the results.

**Key Concepts**: Conditional statements, user input/output, basic arithmetic  
**Technologies**: C++, Math functions

[Link to the Code](https://github.com/YourUsername/YourRepo/blob/main/simple-grading-system.cpp)

---

### 3. Nested If Condition for Grade Evaluation
**Description**:  
This project demonstrates the use of nested `if` conditions in C++ for evaluating a student's performance based on an average grade. It takes input for five subject grades, calculates the average, and outputs a corresponding message for different grade ranges, ensuring proper handling of invalid values.

**Key Concepts**: Nested `if` conditions, input validation, user input/output  
**Technologies**: C++

Here’s a preview of the nested `if` condition that evaluates the average grade:
```cpp
if (total > 100) {
    cout << "Invalid Grade.";
} else if (total >= 90 && total <= 100) {
    cout << "You did an EXCELLENT job!!";
} else if (total >= 85 && total <= 89) {
    cout << "You did a GREAT job!!";
} else if (total >= 75 && total <= 84) {
    cout << "You did a GOOD job!";
} else {
    cout << "Do your best next time.";
}
