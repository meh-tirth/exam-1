#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = rows; j >= rows - i + 1; j--) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}