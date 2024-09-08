#include<stdio.h>

int main(){
    int salary,HRA,DA,TA,GROSSSALARY;

    
    printf("basic salary :");
    scanf("%d",&salary);

    printf("HRA = ");
    scanf("%d" ,&HRA);


    printf("DA = ");
    scanf("%d" ,&DA);


    printf("TA = ");
    scanf("%d" ,&TA);

    GROSSSALARY = salary + (salary*HRA/100) + (salary*DA/100) + (salary*TA/100);
    printf("GROSSSALARY : %d",GROSSSALARY);

}