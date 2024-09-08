#include<stdio.h>
int main(){
    int a = 12;
    int k = 6;

    int Addition = a + k;
    int Subtraction = a - k;
    int Multiplication = a * k;
    int Division = a / k;
    int Modulo = a % k;


    printf("Addition of 12 and 6 is 18\n");
    printf("Subtraction of 12 and 6 is 6\n");
    printf("Multiplication of 12 and 6 is 72\n");
    printf("Division of 12 and 6 is 2\n");
    printf("Modulo of 12 and 6 is 0\n\n\n\n");




    printf("%d + %d = %d\n", a,k ,Addition);
    printf("%d - %d = %d\n", a,k ,Subtraction);
    printf("%d * %d = %d\n", a,k ,Multiplication);
    printf("%d / %d = %d\n", a,k ,Division);
    printf("%d %% %d = %d\n\n\n\n", a,k ,Modulo);


}