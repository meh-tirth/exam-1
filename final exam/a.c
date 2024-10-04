#include<stdio.h>

int main(){
    int user,sum = 0;

    printf("enter the value : ");
    scanf("%d",&user);

    for (int i = 0; i <= user; i++)
    {
        sum += i;
    }
    printf("ans %d",sum);
}