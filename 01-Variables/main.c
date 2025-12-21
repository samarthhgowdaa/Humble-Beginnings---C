#include<stdio.h>
#include<stdbool.h> // When working with Boolean

int main(){

    //integer data types

    int age = 21;
    int year = 2025;
    int quantity = 2;
    
    printf("I am %d years old\n", age);
    printf("The year is %d \n", year);
    printf("I have ordered %d book/s \n", quantity);

    //Float data types (has capability to store only 6-7 numbers after the decimal)

    float gpa = 8.1;
    float price = 359.59;
    float temperature = 21.7;

    printf("My GPA is %.2f \n", gpa);
    printf("The total of the ordered items is %.2f \n", price);
    printf("Temperature around here is %.2f°C \n", temperature);

    //To store more after the decimal, upto 15 digits, we use double

    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("Value of pi is %lf \n",pi);
    printf("Value of e is %lf \n",e);

    //We can also store characters using char
    //This can only store single character

    char currency = '$'; 
    char grade = 'A';
    char symbol = '%';

    printf("your currency is %c \n",currency);
    printf("your grade is %c \n",grade);
    printf("your symbol is %c \n",symbol);


    //We use string to represent a group of characters, but C doesn't have strings, so we use an array of characters

    char name[] = "name";
    char food[] = "Biryani";
    char mail[] = "abcd123@gmail.com";

    printf("Hello, fellow %s \n", name); // %s is string
    printf("Fav food is %s \n", food);
    printf("My mail is %s \n", mail);


    // Another data type is Boolean
    // they are either true or false (1 or 0)
    // we need to include a header file #include<stdbool.h>

    bool isOnline = true; // or 1
    bool isStudent = false; // or 0
    bool forSale = true; // or 1
    
    printf("%d \n", isOnline);

    if (isOnline)
    {
        printf("The user is Online\n");
    }
    else
    {
        printf("The user is offline\n");
    }
    

    
    if (isStudent)
    {
        printf("You are a student\n");
    }
    else
    {
        printf("You are not a student\n");
    }
    

    if (forSale)
    {
        printf("Is for sale\n");
    }
    else
    {
        printf("Is NOT for sale\n");
    }
    
    
    
    

    return 0;
}