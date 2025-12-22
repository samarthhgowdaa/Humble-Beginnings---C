# User Input

Used to get user input in a program.

To get an input we first need to assign values, or just declare variables, but without any values assigned to the variable, the code may print undefined values. So to prevent this we assign initial values to variables, which are unique in accordance to their data types.

* for *int* we go with '**0**',
* for *float*, is initialized with '**0.0f**',
* *char* is set to '**\0**',
* a *string* is limited with a *constraint*

```c
int age = 0;
float gpa = 0.0f; // a float initial number indicator
char grade = '\0';
char name[30] = ""; //string value limited to 30 characters
```

The '**\0**' is a null terminator, which clears out the initial value and sets it to 0.

```c
printf("Enter your age: ");
scanf("%d", &age);
```
Function '**scanf()**' is used to scan user input and **&** is a address locater, which kind of guides the scanned values to be stored in the linked variables.

*Note: No need to use '**\n**' to add new line while scanning input, it adds un-necessary complications to the code.*

There will be an *input buffer* which leads or forces a new line to be added after an input, leading errors in scanning the next input/ skipping it altogether, therefore, to eliminate it we use a space before *format specifiers*.

For eg:
```c
scanf(" %c", &grade);
```

the scanf function doesn't read white-spaces therefore it omits the characters inputed after the white-space, so to overcome this, we use 3 new lines of code, and a header file, they are:

```c
#include<string.h>

getchar();
printf("Enter your full-name: ");
fgets(name, sizeof(name), stdin); // or fgets(name, 30, stdin);
name[strlen(name) - 1] = '\0';
```
'**getchar()**' is used to clear input buffers especially for '**fgets()**', fgets function can read white-spaces, while fgets stands for *File Get String*. fgets adds a new line at the end, so to remove it another line of code is used below. which removes the additional line from the code, and the other terms are self-explanatory.

## The Code

```c
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
```