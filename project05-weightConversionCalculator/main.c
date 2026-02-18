#include<stdio.h>

int main(){

    int choice = 0;
    float pounds = 0;
    float kilograms = 0;
    
    printf("Weight Conversion Calculator\n");
    printf("1. Pounds to Kilograms\n");
    printf("2. Kilograms to Pounds\n");
    printf("Enter your Choice 1 or 2: ");
    scanf("%d", &choice);

    if (choice == 1){
        //covert pounds to kilo
        printf("Enter weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds * 0.45359237;    
        printf("\nAfter Conversion %.2f pounds is %.2f Kg(s)\n", pounds, kilograms);
    }
    else if (choice == 2){
        //convert kilo into pounds
        printf("Enter weight in KiloGrams: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("\nAfter conversion %.2f Kg is %.2f Pound(s)\n", kilograms, pounds);

    }
    else{
        printf("Invalid Choice! Please enter 1 or 2\n");
    }
    
    return 0;
}