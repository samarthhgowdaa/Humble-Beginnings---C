#include<stdio.h>
#include<math.h>

int main (){

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // The order matters, so always use the bigger values first

    if(age <= 18){
        printf("You are a child");
    }
    else if (age > 18){
        printf("you are are an adult");
    }
    else if (age == 0){ //use 2 equals for comparison
        printf("Bro! Come out of the womb");
    }
    else{
        printf("you are dead!");
    }
    
    return 0;
}