#include<stdio.h>

int main(){

    int age = 21;
    float price = 359.59;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Fyodor Dostoevsky";

    printf("%d \n", age);
    printf("%f \n", price);
    printf("%lf \n", pi);
    printf("%c \n", currency);  //character
    printf("%s \n", name);      //string or an array of characters

    //setting width of an output

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;
    int num4 = 100;

    printf("%3d \n", num1);  //Printing 3 spaces before the number is printed
    printf("%03d \n", num2); //Rather than having spaces, we'll have zeros
    printf("%+d \n", num3);  //Gives us integer output
    printf("%+d \n", num4);  //Gives us integer output

    //setting precision of an output

    float price1 = 19.99;
    float price2 = 1.59;
    float price3 = -100.09;

    printf("%.2f \n", price1); //to display two digits after the decimal
    printf("%.1f \n", price2); //the output gets rounded
    printf("%+4.1f \n", price3); //minimum width to be displayed is '2', and precision to be displayed is '.2'
                                //and the flag is '+'
    
    

    
    return 0;
}