#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 5; j > i; j--) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
