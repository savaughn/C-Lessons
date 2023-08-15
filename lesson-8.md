## Lesson Plan: Functions in C (Chapter 8)

**Objective:** Introduce students to functions and their role in C programming.

**Duration:** 1-2 class periods (approximately 45-90 minutes each)

### Day 1: Introduction to Functions

**Introduction (10 minutes)**
- Discuss the importance of functions in programming.
- Introduce the concept of breaking down programs into smaller, manageable parts.

[**Defining Functions (20 minutes)**](#defining-functions-examples)
- Explain how to define and declare functions in C programming.
- Discuss function prototypes and their significance.
- Provide examples of defining and using functions.

[**Function Call and Return (20 minutes)**](#function-call-and-return-examples)
- Introduce function calls and the return statement.
- Discuss parameter passing and argument evaluation.
- Provide examples of calling functions and using return values.

### Day 2: Function Parameters and Recursion

**Recap (10 minutes)**
- Review the basics of functions, function calls, and return statements.

[**Function Parameters (20 minutes)**](#function-parameters-examples)
- Explain the concept of function parameters and their types.
- Discuss pass by value and pass by reference.
- Provide examples of functions with parameters.

[**Recursion (20 minutes)**](#recursion-examples)
- Introduce recursion and its use in solving problems.
- Discuss base case and recursive case.
- Provide examples of recursive functions.

**Hands-on Coding Practice (40 minutes)**
- Distribute exercises involving functions and recursion.
- Students work on coding exercises individually or in pairs.
- Walk through examples to ensure understanding.

**Assessment:**
- Homework assignment with coding exercises involving functions and recursion.

### Day 3: Function Libraries and Review

[**Using Function Libraries (20 minutes)**](#using-function-libraries-examples)
- Explain the use of pre-defined function libraries.
- Discuss including header files and linking libraries.
- Provide examples of using standard library functions.

**Review (20 minutes)**
- Quick review of function definition, parameters, recursion, and libraries.
- Address questions from the homework assignment.

### Conclusion and Discussion

**Closing Discussion (15 minutes)**
- Recap main concepts: functions, parameters, recursion, and libraries.
- Discuss the modular and organized approach to programming using functions.

**Extension Activities:**
- Explore advanced topics like function pointers.
- Introduce coding challenges involving complex functions.

## Code Examples

### Defining Functions Examples

**Defining and Using Functions:**
```c
#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int result = add(5, 7); // Function call
    printf("Result: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

### Function Call and Return Examples

**Function Call and Return:**
```c
#include <stdio.h>

int square(int num);

int main() {
    int number = 5;
    int squared = square(number); // Function call
    printf("Squared: %d\n", squared);
    return 0;
}

int square(int num) {
    return num * num; // Return statement
}
```

### Function Parameters Examples

**Function Parameters:**
```c
#include <stdio.h>

void swap(int *x, int *y);

int main() {
    int a = 10, b = 20;
    printf("Before Swap: a = %d, b = %d\n", a, b);
    swap(&a, &b); // Passing addresses as arguments
    printf("After Swap: a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
```

### Recursion Examples

**Recursion:**
```c
#include <stdio.h>

int factorial(int num);

int main() {
    int n = 5;
    printf("Factorial of %d: %d\n", n, factorial(n));
    return 0;
}

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}
```

### Using Function Libraries Examples

**Using Standard Library Functions:**
```c
#include <stdio.h>
#include <math.h> // Including the math library

int main() {
    double value = 2.0;
    double sqrtValue = sqrt(value); // Using a library function
    printf("Square root of %.2f: %.2f\n", value, sqrtValue);
    return 0;
}
```
