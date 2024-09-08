#include<stdio.h>
int main(){

int Mat,Eng,Sci;
float percentage;

  printf(" ENTER THE MATHS MARKS :-   ");
  scanf("%d",&Mat);

  printf(" ENTER THE ENGLISH MARKS :-  ");
  scanf("%d",&Eng);

  printf(" ENTER THE SCIENCSE MARKS :-  ");
  scanf("%d",&Sci);


  percentage=(Mat+Eng+Sci)/3;
  printf("output  : %f", percentage);
 

  

}