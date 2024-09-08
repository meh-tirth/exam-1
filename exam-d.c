#include<stdio.h>

int main(){

    int user,user2;

    printf("press 1 for English.\n ");
    printf("press 2 for Hindi.\n ");
    printf("press 3 for Gujarati \n");

    printf("enter your no. => ");
    scanf("%d",&user);

    switch (user)
    {
    case 1:
        printf("plese click 2 and give me dosa\n");
        printf("plese click 2 and give me samosa\n");
        printf("plese click 2 and give me pizaa\n");
        break;
    case 2:
        printf("dosa khane ke liye ak dabaye\n");
        printf("samosa khane ke liye do dabaye\n");
        printf("pizza khane ke liye tin dabaye\n");
        break;
    case 3:
        printf("dosa khava mate ak dabavo\n");
        printf("samosa khava mate be dabavo\n");
        printf("pizza khava mate tin dabavo\n");
        break;
    
    default:
        break;
    }

    printf("enter your no. => ");
    scanf("%d",&user2);

    switch (user2)
    {
    case 1:
        printf("you have successfully in your order.  specialorder");
        break;
    case 2:
        printf("apka parcel ready ho gaya ho hai");
        break;
    case 3:
        printf("tamru parcel ready tai gayu che");
        break;
    
    default:
        break;
    }
}