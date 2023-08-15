#include <stdio.h>
#include <errno.h>

int main() {
    FILE *filePointer;
    filePointer = fopen("nonexistent.txt", "r");
    if (filePointer == NULL) {
        perror("Error"); // Using perror to display error message
        printf("Error Code: %d\n", errno); // Displaying error code
    }
    return 0;
}