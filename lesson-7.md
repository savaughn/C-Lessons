## Lesson Plan: Input and Output (Chapter 7)

**Objective:** Introduce students to input and output operations in C programming.

**Duration:** 1-2 class periods (approximately 45-90 minutes each)

### Day 1: Standard Input and Output

**Introduction (10 minutes)**
- Discuss the importance of input and output operations in programming.
- Introduce the concept of standard input and standard output.

[**Basic Input and Output (20 minutes)**](#basic-input-and-output-examples)
- Explain how to use `printf()` and `scanf()` for basic input and output.
- Discuss the format specifiers for different data types.
- Provide examples of basic input and output operations.

[**Formatted Input and Output (20 minutes)**](#formatted-input-and-output-examples)
- Introduce formatted input/output using `printf()` and `scanf()`.
- Discuss formatting options for alignment, precision, and width.
- Provide examples of formatted input and output.

### Day 2: File Input and Output

**Recap (10 minutes)**
- Review the basics of standard input and output operations.

[**File Handling (20 minutes)**](#file-handling-examples)
- Introduce file input and output operations in C.
- Discuss opening, reading, writing, and closing files.
- Provide examples of file handling operations.

**Hands-on Coding Practice (40 minutes)**
- Distribute exercises involving standard and file input/output operations.
- Students work on coding exercises individually or in pairs.
- Walk through examples to ensure understanding.

**Assessment:**
- Homework assignment with coding exercises involving input/output and file handling.

### Day 3: Error Handling and Review

[**Error Handling (20 minutes)**](#error-handling-examples)
- Explain error handling techniques in C programming.
- Discuss using `errno` and error codes.
- Provide examples of error handling.

**Review (20 minutes)**
- Quick review of standard input/output, file handling, and error handling.
- Address questions from the homework assignment.

### Conclusion and Discussion

**Closing Discussion (15 minutes)**
- Recap main concepts: standard input/output, file handling, and error handling.
- Discuss the significance of efficient and reliable input/output operations.

**Extension Activities:**
- Explore more advanced file manipulation techniques.
- Introduce techniques for handling larger datasets.

## Code Examples

### Basic Input and Output Examples

**Basic Input and Output:**
```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num); // Input
    printf("You entered: %d\n", num); // Output
    return 0;
}
```

### Formatted Input and Output Examples

**Formatted Input and Output:**
```c
#include <stdio.h>

int main() {
    float num = 3.14159;
    printf("Formatted Number: %.2f\n", num); // Formatted output
    return 0;
}
```

### File Handling Examples

**File Handling:**
```c
#include <stdio.h>

int main() {
    FILE *filePointer;
    filePointer = fopen("data.txt", "w"); // Opening a file for writing
    if (filePointer != NULL) {
        fprintf(filePointer, "Hello, File!"); // Writing to the file
        fclose(filePointer); // Closing the file
    }
    return 0;
}
```

### Error Handling Examples

**Error Handling:**
```c
#include <stdio.h>
#include <errno.h>

int main() {
    FILE *filePointer;
    filePointer = fopen("nonexistent.txt", "r");
    if (filePointer == NULL) {
        perror("Error"); // Using perror to display error message
        printf("Error Code: %d\n", errno); // Displaying error code
    }
    return 0;
}
```
