#include <stdio.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    struct Student stu1 = {101, "Alice"};
    printf("Roll: %d, Name: %s\n", stu1.roll, stu1.name);
    return 0;
}