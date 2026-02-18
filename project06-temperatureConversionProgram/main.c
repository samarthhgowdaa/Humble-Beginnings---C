#include<stdio.h>

int main(){

    char choice = '\0'; //use null terminator
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Fahrenheit to Celsius\n");
    printf("F. Celsius to Fahrenheit\n");
    printf("Do you want to convert the temperature into Celsius (C) or Fahrenheit (F): ");
    scanf("%c", &choice);

    if (choice == 'C'){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32)*5/9;
        printf("%.2f F is %.2f C", fahrenheit, celsius);
    }
    else if (choice == 'F')
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius*9/5)+32;
        printf("%.2f C is %.2f F", celsius, fahrenheit);
    }
    else{
        printf("User Input error! Select a valid  choice");
    }
    
    return 0;
}