#include<stdio.h>

int main(){
    char alpahabets = 'a';

    do
    {
        if (alpahabets % 4 == 1)

        {
            printf("%c\t" , alpahabets);
        }
        alpahabets++;
    } while (alpahabets <= 'z');
}