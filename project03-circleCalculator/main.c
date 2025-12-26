#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    float r = 0.0f; //radius 
    char unit[4] = "";  // to print 2 letters the character size is 4!!
    float d = 0.0f;  //diameter
    float area = 0.0f;
    float circumference = 0.0f;
    float surfaceArea = 0.0f;
    float volume = 0.0f;
    const float pi = 3.1415;
    
    printf("Enter the radius: ");
    scanf("%f", &r);
    
    getchar();
    printf("Desired unit: ");
    fgets(unit, sizeof(unit), stdin);
    unit[strlen(unit) - 1] = '\0';

    
    d = 2*r;
    area = pi * pow(r, 2);
    circumference = 2 * pi * r;
    surfaceArea = 4 * pi * pow(r, 2);
    volume = (4/3)* pi * pow(r, 3);

    printf("Diameter of circle = %.4f %s\n", d, unit);
    printf("Area of circle = %.3f %s^2\n", area, unit);
    printf("Circumference of circle = %.3f %s\n", circumference, unit);
    printf("\nIf it'd be a sphere of the same radius\n");
    printf("\nSurface Area = %.4f %s^2\n", surfaceArea, unit);
    printf("Volume = %.3f %s^3", volume, unit);
    
    return 0;
}