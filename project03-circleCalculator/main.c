#include<stdio.h>
#include<math.h>

int main()
{
    float r = 0.0f; //radius 
    float d = 0.0f;  //diameter
    float area = 0.0f;
    float circumference = 0.0f;
    float surfaceArea = 0.0f;
    float volume = 0.0f;
    const float pi = 3.1415;
    
    printf("Enter the radius: ");
    scanf("%f", &r);
    
    d = 2*r;
    area = pi * pow(r, 2);
    circumference = 2 * pi * r;
    surfaceArea = 4 * pi * pow(r, 2);
    volume = (4/3)* pi * pow(r, 3);

    printf("Diameter of circle = %.4f\n", d);
    printf("Area of circle = %.3f\n", area);
    printf("Circumference of circle = %.3f\n", circumference);
    printf("\nIf it'd be a sphere of the same radius\n");
    printf("\nSurface Area = %.4f\n", surfaceArea);
    printf("Volume = %.3f\n", volume);
    
    return 0;
}