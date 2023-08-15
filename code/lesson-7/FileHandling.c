#include <stdio.h>

int main() {
    FILE *filePointer;
    filePointer = fopen("data.txt", "w"); // Opening a file for writing
    if (filePointer != NULL) {
        fprintf(filePointer, "Hello, File!"); // Writing to the file
        fclose(filePointer); // Closing the file
    }
    return 0;
}