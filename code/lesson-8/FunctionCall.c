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