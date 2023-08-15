#include <stdio.h>

int main() {
    int num = 10;
    int *ptr; // Pointer declaration
    ptr = &num; // Pointer initialization
    printf("Value: %d\n", *ptr); // Dereferencing pointer
    return 0;
}