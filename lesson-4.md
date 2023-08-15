## Lesson Plan: Functions and Program Structure (Chapter 4)

**Objective:** Introduce students to the concept of functions and the structure of C programs with an emphasis on modularity and code organization.

**Duration:** 1-2 class periods (approximately 45-90 minutes each)

### Day 1: Introduction to Functions

**Introduction (10 minutes)**
- Discuss the importance of functions in programming.
- Introduce the concept of modular programming.

[**Functions and Prototypes (20 minutes)**](#functions-and-prototypes-examples)
- Explain the purpose and benefits of using functions.
- Discuss function prototypes and their role in code organization.
- Provide examples of function prototypes and declarations.

[**Function Definitions (20 minutes)**](#function-definitions-examples)
- Introduce function definitions and their components.
- Discuss the function header, return type, and parameters.
- Provide examples of defining and using functions.

### Day 2: Functions in Practice and Hands-on Practice

**Recap (10 minutes)**
- Review the concept of functions and their components.

[**Passing Arguments (20 minutes)**](#passing-arguments-examples)
- Explain how to pass arguments to functions.
- Discuss call by value and call by reference.
- Provide examples of passing arguments to functions.

**Hands-on Coding Practice (40 minutes)**
- Distribute exercises involving creating and using functions.
- Students work on coding exercises individually or in pairs.
- Walk through examples to ensure understanding.

**Assessment:**
- Homework assignment with coding exercises involving functions.

### Day 3: Recursive Functions and Program Structure

[**Recursive Functions (20 minutes)**](#recursive-functions-examples)
- Introduce recursive functions and their characteristics.
- Discuss base cases and recursive cases.
- Provide examples of recursive functions.

[**Program Structure and Header Files (20 minutes)**](#program-structure-examples)
- Discuss structuring larger programs using multiple files.
- Introduce header files and their role.
- Provide examples of creating header files.

**Review (20 minutes)**
- Quick review of functions, function arguments, recursion, and program structure.
- Address questions from the homework assignment.

### Conclusion and Discussion

**Closing Discussion (15 minutes)**
- Recap main concepts: functions, recursion, program structure.
- Discuss the significance of well-organized code and modular design.

**Extension Activities:**
- Explore advanced topics like function pointers and libraries.
- Introduce debugging techniques and tools.

## Code Examples

### Functions and Prototypes Examples

**Function Prototype:**
```c
#include <stdio.h>

int add(int a, int b); // Function prototype

int main() {
    int result = add(3, 5);
    printf("Sum: %d\n", result);
    return 0;
}

int add(int a, int b) { // Function definition
    return a + b;
}
```

### Function Definitions Examples

**Defining and Using Functions:**
```c
#include <stdio.h>

int square(int num); // Function prototype

int main() {
    int number = 4;
    int squared = square(number);
    printf("Square: %d\n", squared);
    return 0;
}

int square(int num) { // Function definition
    return num * num;
}
```

### Passing Arguments Examples

**Call by Value:**
```c
#include <stdio.h>

void modifyValue(int num);

int main() {
    int value = 10;
    printf("Before: %d\n", value);
    modifyValue(value);
    printf("After: %d\n", value);
    return 0;
}

void modifyValue(int num) {
    num = num * 2;
}
```

**Call by Reference:**
```c
#include <stdio.h>

void modifyValue(int *num);

int main() {
    int value = 10;
    printf("Before: %d\n", value);
    modifyValue(&value);
    printf("After: %d\n", value);
    return 0;
}

void modifyValue(int *num) {
    *num = *num * 2;
}
```

### Recursive Functions Examples

**Factorial Using Recursion:**
```c
#include <stdio.h>

int factorial(int num);

int main() {
    int n = 5;
    printf("Factorial of %d: %d\n", n, factorial(n));
    return 0;
}

int factorial(int num) {
    if (num <= 1) {
        return 1;
    }
    return num * factorial(num - 1);
}
```

### Program Structure Examples

**Creating Header Files:**

Header file (math_utils.h):
```c
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

int add(int a, int b);
int subtract(int a, int b);

#endif
```

Source file (math_utils.c):
```c
#include "math_utils.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
```
