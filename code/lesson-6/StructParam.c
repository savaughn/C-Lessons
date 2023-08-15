#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

void display(struct Rectangle r);

int main() {
    struct Rectangle rect = {10, 5};
    display(rect); // Passing structure to function
    return 0;
}

void display(struct Rectangle r) {
    printf("Length: %d, Width: %d\n", r.length, r.width);
}