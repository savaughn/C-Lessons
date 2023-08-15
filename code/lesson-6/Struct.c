#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1; // Creating an instance of the structure
    p1.x = 3; // Assigning values to structure members
    p1.y = 7;
    
    printf("Point: (%d, %d)\n", p1.x, p1.y);
    return 0;
}
