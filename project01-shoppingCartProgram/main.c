#include<stdio.h>
#include<string.h>

int main(){
    
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?:  ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?:  ");
    scanf("%f", &price);

    printf("How many would you like to buy?:  ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s, worth %.2f each", quantity, item, price);
    printf("\nThe price is: %c%.2f", currency, total);

    return 0;
}