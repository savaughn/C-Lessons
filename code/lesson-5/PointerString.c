#include <stdio.h>

int main() {
    char str[] = "Hello, world!";
    char *ptr = str; // Pointer initialization
    while (*ptr != '\0') {
        printf("%c", *ptr); // Printing characters using pointer
        ptr++;
    }
    printf("\n");
    return 0;
}