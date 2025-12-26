#include<stdio.h>
#include<string.h> // using this to remove the new line character after a string is declared or needed.

int main(){

    char noun[50] = "";
    char verb[50] = "";
    char adj1[50] = "";
    char adj2[50] = "";
    char adj3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] = '\0';
    
    printf("Enter a noun (thing): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';
    
    printf("Enter an adjective (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) - 1] = '\0';
    
    printf("Enter a verb (V1 + ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';
    
    printf("Enter an adjective (description): ");
    fgets(adj3, sizeof(adj3), stdin);
    adj3[strlen(adj3) - 1] = '\0';
    
    printf("\nToday I woke up to a/an %s morning.\n", adj1);
    printf("On the bed, I saw %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adj2, verb);
    printf("I was %s!\n", adj3);

    return 0;
}