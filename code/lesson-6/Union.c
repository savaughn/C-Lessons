#include <stdio.h>

union Data {
    int num;
    char character;
};

int main() {
    union Data d1;
    d1.num = 7;
    d1.character = 'A'; // Overwrites the previous value
    
    printf("Num: %d, Char: %c\n", d1.num, d1.character);
    return 0;
}