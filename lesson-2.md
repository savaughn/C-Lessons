## Lesson Plan: Types, Operators, and Expressions (Chapter 2)

**Objective:** Introduce students to the fundamental concepts of data types, operators, and expressions in C programming.

**Duration:** 1-2 class periods (approximately 45-90 minutes each)

### Day 1: Introduction to Types and Operators

**Introduction (10 minutes)**
- Discuss the importance of programming languages.
- Introduce data types, operators, and expressions in programming.

[**Data Types (20 minutes)**](#data-types-examples)
- Explain data types (int, float, char, etc.).
- Importance of choosing appropriate data types.
- Examples of declaring variables with different data types.

[**Operators (20 minutes)**](#operators-examples)
- Introduce arithmetic, assignment, comparison, and logical operators.
- Operators' role in manipulating data and calculations.
- Illustrate operators using examples.

### Day 2: Expressions and Hands-on Practice

**Recap (10 minutes)**
- Review data types and operators from the previous day.

**Expressions (20 minutes)**
- Define expressions combining variables, constants, and operators.
- Discuss order of operations (precedence) in expressions.
- Provide examples of complex expressions and their evaluation.

**Hands-on Coding Practice (40 minutes)**
- Provide students with computers with C compilers.
- Distribute worksheet or display code examples for practice.
- Walk through examples and allow independent or paired work.

**Assessment:**
- Homework assignment with coding exercises involving data types and operators.

### Day 3: Review and Group Activity

**Review (20 minutes)**
- Quick review of data types, operators, and expressions.
- Address questions from homework assignment.

### Conclusion and Discussion

**Closing Discussion (15 minutes)**
- Recap main concepts: data types, operators, expressions.
- Discuss real-world applications of programming concepts.

**Extension Activities:**
- Challenge with complex expressions and calculations.
- Introduce type casting and its importance.
- Explore online coding platforms or contests.

## Code Examples

### Data Types Examples

**Integers:**
```c
#include <stdio.h>

int main() {
    int age = 20;
    printf("My age is %d years.\n", age);
    return 0;
}
```

**Floating-Point Numbers:**

```c
#include <stdio.h>

int main() {
    float temperature = 98.6;
    printf("Body temperature: %.2f degrees Fahrenheit.\n", temperature);
    return 0;
}
```

**Characters:**

```c
#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Your grade: %c\n", grade);
    return 0;
}
```

### Operators Examples

**Arithmetic Operators:**

```c
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    return 0;
}
```

**Assignment Operators:**

```c
#include <stdio.h>

int main() {
    int num = 7;
    num += 3;  // Equivalent to: num = num + 3
    printf("Updated num: %d\n", num);
    return 0;
}
```

**Comparison Operators:**

```c
#include <stdio.h>

int main() {
    int x = 10, y = 20;
    printf("x > y: %d\n", x > y);
    printf("x <= y: %d\n", x <= y);
    printf("x == y: %d\n", x == y);
    return 0;
}
```

**Logical Operators:**

```c
#include <stdio.h>

int main() {
    int a = 1, b = 0;
    printf("a && b: %d\n", a && b);
    printf("a || b: %d\n", a || b);
    printf("!a: %d\n", !a);
    return 0;
}
```