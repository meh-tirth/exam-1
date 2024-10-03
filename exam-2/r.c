#include<stdio.h>

int main(){

    int sum,num = 0,digit;

    printf("Enter a number:");
    scanf("%d",&num);

   while (num > 0)
   {
    digit = num % 10;
    sum += digit;
    num /= 10;
   }
   printf("Sum of digits: %d\n", sum);
   
    
}