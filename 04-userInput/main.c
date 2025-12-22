#include<stdio.h>
#include<string.h> // That header file

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    //input

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your gpa:  ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar(); //clears input buffer for fgets (can't use space like in scanf function)
    printf("Enter your full-name: ", &name);
    fgets(name, sizeof(name), stdin); //scanf can't read any white spaces
                        //So to display a full name, including whitesapce use function 'fgets'
                        //fgets - File Get string, 30 - length of the name, stdin - standard input
                        //'name, 30, stdin' or 'name, sizeof(name), stdin'
                        //but adds a \n at the end of the code, as input buffer
                        //1 way to get rid of it is use a header file
    name[strlen(name) - 1] = '\0'; // name = "name\0"; omits the new line
    

    //Output window
    
    printf("%s \n", name);
    printf("%d \n", age);
    printf("%.2f \n", gpa);
    printf("%c \n", grade);
    printf("%s \n", name);
    
    return 0;
}