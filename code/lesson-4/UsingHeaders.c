#include <stdio.h>
#include "MathUtils.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int a = 10;
    int b = 5;
    int c = add(a, b);
    int d = subtract(a, b);
    printf("%d + %d = %d\n", a, b, c);
    printf("%d - %d = %d\n", a, b, d);

    return 0;
}