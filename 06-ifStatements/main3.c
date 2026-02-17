#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("You idiot type your name");
    }
    else{
        printf("Your name is %s ?", name);
    }

    return 0;
}