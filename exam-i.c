#include <stdio.h>

int main() {
    int start, first = 0, second = 1, third, end;

    //0 1 1 2 3 5 8 13

    printf("Enter the number : ");
    scanf("%d", &start);

    printf("enter the number: ");
    printf("%d ", first,second,third);


    for (end = 0; end <= start; end++) {
        
            third = first + second;
            first = second;
            second = third;
     
        printf("%d ", third);
    }

}