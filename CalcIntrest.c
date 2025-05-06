#include <stdio.h>

int main()
{
    float principle,rate;
    int timePeriod;
    printf("Calculation Intrest\n");
    printf("Enter Principle Amount($): ");
    scanf("%f",&principle);
    
    printf("Enter Intrest Rate(%%): ");
    scanf("%f",&rate);
    
    printf("Enter Time  Period(Years): ");
    scanf("%d",&timePeriod);
    printf("Intrest for %d Years is $%0.2f ",timePeriod, principle * (rate/100) * timePeriod);
    
    
    return 0;
}

