#include<stdio.h>

int main(){
    int firstyear,lastyear;

    printf("enter the first year :-  ");
    scanf("%d",&firstyear) ;

    printf("enter the last year : ");
    scanf("%d",&lastyear);

    while (firstyear <= lastyear)
    {   
        if (firstyear % 4 == 0)
        {
            printf("%d\n",firstyear);
        }
        firstyear++;
    }
}