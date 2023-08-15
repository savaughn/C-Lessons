#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *ptr = &matrix[0][0]; // Pointer initialization
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", *(ptr + i * 3 + j)); // Accessing 2D array element
        }
        printf("\n");
    }
    return 0;
}