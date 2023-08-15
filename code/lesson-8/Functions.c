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