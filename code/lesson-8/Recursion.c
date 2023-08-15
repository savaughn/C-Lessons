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