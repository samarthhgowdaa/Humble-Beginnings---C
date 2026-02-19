#include<stdio.h>

int main(){

    //Switch = An alternative to using many if-else statements
    //          More helpful & efficient with fixed integer numbers

    int dayOfTheWeek;
    printf("Type a number 1-7: ");
    scanf("%d", &dayOfTheWeek);

    switch (dayOfTheWeek)
    {
    case 1:
        printf("It is Monday");
        break;
    case 2:
        printf("It is Tuesday");
        break;
    case 3:
        printf("It is Wednesday");
        break;
    case 4:
        printf("It is Thursday");
        break;
    case 5:
        printf("It is Friday");
        break;
    case 6:
        printf("It is Saturday");
        break;
    case 7:
        printf("It is Sunday");
        break;
    
    default:
        printf("Invalid! Type a number from 1-7");
        break;
    }
      
    return 0;
}