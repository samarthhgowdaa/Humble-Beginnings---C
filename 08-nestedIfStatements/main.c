#include<stdio.h>
#include<stdbool.h>

int main(){

    float price = 10.0;
    bool isStudent = true; //If a student you'll get a 10% discount
    bool isSenior = true;   //If a Senior you'll get a 20% discount
    char percent = '%';

    //student = 10%
    //senior = 20%
    //student + Senior = 30%

    /*printf("Are you a student? (1 or 0): ");
    scanf("%d", &isStudent);
    printf("Are you a Senior? (1 or 0): ");
    scanf("%d", &isSenior);*/

    //The above lines breaks the code

    
    if (isStudent){
        if(isSenior){
            printf("You get a discount of 30 %c\n", percent);
            price *= 0.7;
        }
        else{
            printf("You get a discount of 10 %c\n", percent);
            price*=0.9;
        }
    }
    else{
        if(isSenior){
            printf("You get a discount of 20 %c\n", percent);
            price*=0.8;
        }
        
    }
    printf("The price of the ticket is %.2f Rupees\n", price);
    printf("Thank you! for buying tickets");

    return 0;
}