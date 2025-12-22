#include<stdio.h>

int main() {

    //arithmatic operators

    float x = 1;
    float y = -3;
    float z = 2;
    float a,b,c,d; //c is just a un-used variable over here
    float f;

    z = x + y; 
    a = x * y;
    b = x / y; 
    //c = x % y; For some reason modulus doesn't work on float?!
    d = x - y;
    f = x / y;

    //x = x + 2 or x += 2
    //x = x - 3 or x -= 3
    //same goes for other arithmetic operations, just a shortcut

    printf("z = %.2f \n", z);
    printf("a = %.2f \n", a);
    printf("b = %.2f \n", b);
    //printf("c = %.2f\n", c);
    printf("d = %.2f\n", d);
    printf("f = %.2f\n", f);


    return 0;
}