#include <stdio.h>

void swap(int *x, int *y);

int main() {
    int a = 10, b = 20;
    printf("Before Swap: a = %d, b = %d\n", a, b);
    swap(&a, &b); // Passing addresses as arguments
    printf("After Swap: a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}