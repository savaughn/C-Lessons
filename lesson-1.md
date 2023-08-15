## Lesson Plan: Introduction to C Programming (Chapter 1)

**Objective:** Introduce students to the basics of C programming, including syntax, structure, and the development environment.

**Duration:** 1-2 class periods (approximately 45-90 minutes each)

### Day 1: Introduction to C Programming

**Introduction (10 minutes)**
- Discuss the significance of programming languages.
- Introduce C programming as a widely used language.

[**Getting Started with C (20 minutes)**](#getting-started-examples)
- Explain the structure of a basic C program.
- Discuss the role of the `main()` function.
- Provide examples of simple C programs.

[**Variables and Data Types (20 minutes)**](#variables-and-data-types-examples)
- Introduce the concept of variables and their role in programming.
- Explain different data types: int, float, char, etc.
- Examples of declaring and using variables.

### Day 2: Input/Output and Hands-on Practice

**Recap (10 minutes)**
- Review the structure of a basic C program and variables.

[**Input and Output (20 minutes)**](#input-and-output-examples)
- Discuss the use of `printf()` and `scanf()` for input and output.
- Explain the format specifiers for different data types.
- Provide examples of using `printf()` and `scanf()`.

**Hands-on Coding Practice (40 minutes)**
- Distribute exercises involving basic C program structure and variables.
- Students work on coding exercises individually or in pairs.
- Walk through examples to ensure understanding.

**Assessment:**
- Homework assignment with coding exercises involving input, output, and variables.

### Day 3: Comments, Compilation, and Review

[**Comments and Compilation (20 minutes)**](#comments-and-compilation-examples)
- Introduce the use of comments to annotate code.
- Discuss the compilation process and its importance.
- Provide examples of comments and compilation.

**Review (20 minutes)**
- Quick review of program structure, variables, input/output, and comments.
- Address questions from the homework assignment.

### Conclusion and Discussion

**Closing Discussion (15 minutes)**
- Recap main concepts: C program structure, variables, input/output.
- Discuss the importance of a strong foundation in C programming.

**Extension Activities:**
- Explore more advanced topics like functions, libraries, and control flow.

## Code Examples

### Getting Started Examples

**Hello World Program:**
```c
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}
```

### Variables and Data Types Examples

**Declaring Variables:**
```c
#include <stdio.h>

int main() {
    int age = 25;
    float height = 5.9;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```

### Input and Output Examples

**Using scanf() and printf():**
```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}
```

### Comments and Compilation Examples

**Single-line Comment:**
```c
#include <stdio.h>

int main() {
    // This is a single-line comment
    printf("Hello, world!\n");
    return 0;
}
```

**Multi-line Comment:**
```c
#include <stdio.h>

int main() {
    /* This is a multi-line comment.
       It can span multiple lines.
    */
    printf("Hello, world!\n");
    return 0;
}
```
