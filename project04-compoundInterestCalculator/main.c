#include<stdio.h>
#include<math.h>

int main(){

    // Compound interest calculator
    
    double principal = 0.0;
    double rate = 0.0;
    int years;
    int timeCompounded = 0;
    double total = 0.0;

    printf("Compund Interest Calculator\n");

    //The formula is Amount = principal( 1 + r/n ) pow nt

    printf("Enter Principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate/100;

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter the number of times of year compounded (n): ");
    scanf("%d", &timeCompounded);

    total = principal * pow(1 + (rate/timeCompounded), timeCompounded*years);

    printf("After %d years, the total Amount will be $%.2lf", years, total);



    return 0;
}