#include <stdio.h>

void modifyValue(int *num);

int main() {
    int value = 10;
    printf("Before: %d\n", value);
    modifyValue(&value);
    printf("After: %d\n", value);
    return 0;
}

void modifyValue(int *num) {
    *num = *num * 2;
}