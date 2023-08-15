#include <stdio.h>

struct Employee {
    int empId;
    float salary;
};

union Status {
    int errorCode;
    char message[50];
};

int main() {
    printf("Size of Employee: %lu bytes\n", sizeof(struct Employee));
    printf("Size of Status: %lu bytes\n", sizeof(union Status));
    return 0;
}