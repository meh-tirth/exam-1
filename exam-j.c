#include<stdio.h>

int main(){
    int k,a=0;

    printf("Enter the value :");
    scanf("%d",&k);

    while (k!=0)
    {
        k /=10;
        a++;

    }
    printf("total number is : %d\n",a);
    

}