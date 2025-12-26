#include<stdio.h>
#include<math.h> //a library to use mathematic functions

int main()
{
    float x = 3;
    float y = 3.1549;
    float z = 3;
    float a = 45;

    //x = sqrt(x); //without that header file, this won't work
    x = pow(x, 3); // x cube or x power 3
    //y = round(y);  //rounds the number
    y = ceil(y); //rounds up
    //y = floor(y); //rounds down
    //z = abs(z); //Absolute value of z
    z = log(z);
    a = sin(a); //will be in radians, same goes for cos, tan, etc



    printf("%f \n", x);
    printf("%f \n", y);
    printf("%f \n", z);
    printf("%f \n", a);

    return 0;
}