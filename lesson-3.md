## Lesson Plan: Control Flow (Chapter 3)

**Objective:** Introduce students to control flow structures in C programming, including if, else, switch statements, and loops.

**Duration:** 1-2 class periods (approximately 45-90 minutes each)

### Day 1: Introduction to Control Flow

**Introduction (10 minutes)**
- Discuss the importance of controlling program execution.
- Introduce control flow structures: if, else, switch, loops.

[**if Statements (20 minutes)**](#if-statements-examples)
- Explain the use of if statements for conditional execution.
- Discuss the syntax of if statements.
- Provide examples of using if statements.

[**else Statements (20 minutes)**](#else-statements-examples)
- Introduce else statements for handling alternative cases.
- Explain the role of else in conjunction with if.
- Illustrate the usage of else statements.

### Day 2: Loops and Hands-on Practice

**Recap (10 minutes)**
- Review if and else statements from the previous day.

[**Loops - while and for (20 minutes)**](#loops-examples)
- Define while and for loops for repetitive execution.
- Discuss the syntax of while and for loops.
- Provide examples of using loops for iteration.

**Hands-on Coding Practice (40 minutes)**
- Distribute exercises involving if, else, and loop structures.
- Students work on coding exercises individually or in pairs.
- Walk through examples to ensure understanding.

**Assessment:**
- Homework assignment with coding exercises involving control flow.

### Day 3: switch Statement and Review

**switch Statement (20 minutes)**
- Introduce the switch statement for multi-choice scenarios.
- Explain the structure of the switch statement.
- Provide examples of using switch statements.

**Review (20 minutes)**
- Quick review of if, else, loops, and switch concepts.
- Address questions from homework assignment.

### Conclusion and Discussion

**Closing Discussion (15 minutes)**
- Recap main concepts: if, else, loops, switch.
- Discuss the significance of control flow in programming logic.

**Extension Activities:**
- Challenge students with complex scenarios involving control flow.
- Explore nested if-else, more advanced loop patterns, and advanced switch usage.

## Code Examples

### if Statements Examples

**Basic if Statement:**

```c
#include <stdio.h>

int main() {
    int num = 10;
    
    if (num > 5) {
        printf("The number is greater than 5.\n");
    }
    
    return 0;
}
```

**if-else Statement:**

```c
#include <stdio.h>

int main() {
    int age = 15;
    
    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are not an adult.\n");
    }
    
    return 0;
}
```

### else Statements Examples

**Using else with if:**

```c
#include <stdio.h>

int main() {
    int score = 85;
    
    if (score >= 60) {
        printf("You passed the exam.\n");
    } else {
        printf("You did not pass the exam.\n");
    }
    
    return 0;
}
```

**Multiple else if:**

```c
#include <stdio.h>

int main() {
    int num = 5;
    
    if (num > 0) {
        printf("Positive number.\n");
    } else if (num < 0) {
        printf("Negative number.\n");
    } else {
        printf("Zero.\n");
    }
    
    return 0;
}
```

### Loops Examples

**while Loop:**

```c
#include <stdio.h>

int main() {
    int count = 1;
    
    while (count <= 5) {
        printf("Count: %d\n", count);
        count++;
    }
    
    return 0;
}
```

**for Loop:**

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Iteration: %d\n", i);
    }
    
    return 0;
}
```

**switch Statement Examples**

```c
#include <stdio.h>

int main() {
    int choice = 2;
    
    switch (choice) {
        case 1:
            printf("You selected Option 1.\n");
            break;
        case 2:
            printf("You selected Option 2.\n");
            break;
        case 3:
            printf("You selected Option 3.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
    
    return 0;
}
```