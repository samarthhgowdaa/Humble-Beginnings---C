#include<stdio.h>
#include<math.h>

int main (){

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are an adult");
    }
    else if (age > 18){
        printf("you are are an adult");
    }
    else if (age == 0){
        printf("Bro! Come out of the womb");
    }
    else{
        printf("you are dead!");
    }
    
    return 0;
}