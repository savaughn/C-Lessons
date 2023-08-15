## Lesson Plan: Structures and Unions (Chapter 6)

**Objective:** Introduce students to the concepts of structures and unions in C programming and their applications.

**Duration:** 1-2 class periods (approximately 45-90 minutes each)

### Day 1: Introduction to Structures

**Introduction (10 minutes)**
- Discuss the significance of structures and unions in programming.
- Introduce the concept of organizing data using user-defined types.

[**Defining Structures (20 minutes)**](#defining-structures-examples)
- Explain the concept of structures and their role in C programming.
- Discuss defining structure members and creating instances.
- Provide examples of defining and using structures.

[**Accessing Structure Members (20 minutes)**](#accessing-structure-members-examples)
- Introduce accessing structure members using the dot operator.
- Discuss nested structures and member access.
- Provide examples of accessing structure members.

### Day 2: Structures in Practice and Hands-on Practice

**Recap (10 minutes)**
- Review the basics of structures and accessing structure members.

[**Passing Structures to Functions (20 minutes)**](#passing-structures-to-functions-examples)
- Explain how to pass structures as function arguments.
- Discuss call by value and call by reference for structures.
- Provide examples of passing structures to functions.

**Hands-on Coding Practice (40 minutes)**
- Distribute exercises involving creating, accessing, and passing structures.
- Students work on coding exercises individually or in pairs.
- Walk through examples to ensure understanding.

**Assessment:**
- Homework assignment with coding exercises involving structures.

### Day 3: Unions and Memory Allocation

[**Introduction to Unions (20 minutes)**](#introduction-to-unions-examples)
- Introduce the concept of unions and their similarities with structures.
- Discuss the memory allocation for unions.
- Provide examples of defining and using unions.

[**Memory Allocation (20 minutes)**](#memory-allocation-examples)
- Explain the memory allocation for structures and unions.
- Discuss padding and alignment in memory allocation.
- Provide examples of memory allocation.

**Review (20 minutes)**
- Quick review of structures, unions, accessing members, and memory allocation.
- Address questions from the homework assignment.

### Conclusion and Discussion

**Closing Discussion (15 minutes)**
- Recap main concepts: structures, unions, accessing members, and memory allocation.
- Discuss the choice between structures and unions for different scenarios.

**Extension Activities:**
- Explore advanced topics like nested structures and unions.
- Introduce bit-fields and their applications.

## Code Examples

### Defining Structures Examples

**Defining and Using Structures:**
```c
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1; // Creating an instance of the structure
    p1.x = 3; // Assigning values to structure members
    p1.y = 7;
    
    printf("Point: (%d, %d)\n", p1.x, p1.y);
    return 0;
}
```

### Accessing Structure Members Examples

**Accessing Structure Members:**
```c
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    struct Student stu1 = {101, "Alice"};
    printf("Roll: %d, Name: %s\n", stu1.roll, stu1.name);
    return 0;
}
```

### Passing Structures to Functions Examples

**Passing Structures to Functions:**
```c
#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

void display(struct Rectangle r);

int main() {
    struct Rectangle rect = {10, 5};
    display(rect); // Passing structure to function
    return 0;
}

void display(struct Rectangle r) {
    printf("Length: %d, Width: %d\n", r.length, r.width);
}
```

### Introduction to Unions Examples

**Defining and Using Unions:**
```c
#include <stdio.h>

union Data {
    int num;
    char character;
};

int main() {
    union Data d1;
    d1.num = 65;
    d1.character = 'A'; // Overwrites the previous value
    
    printf("Num: %d, Char: %c\n", d1.num, d1.character);
    return 0;
}
```

### Memory Allocation Examples

**Memory Allocation for Structures and Unions:**
```c
#include <stdio.h>

struct Employee {
    int empId;
    float salary;
};

union Status {
    int errorCode;
    char message[50];
};

int main() {
    printf("Size of Employee: %lu bytes\n", sizeof(struct Employee));
    printf("Size of Status: %lu bytes\n", sizeof(union Status));
    return 0;
}
```
