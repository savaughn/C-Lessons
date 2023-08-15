#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer initialization
    printf("Element 2: %d\n", *(ptr + 1)); // Accessing array element
    return 0;
}