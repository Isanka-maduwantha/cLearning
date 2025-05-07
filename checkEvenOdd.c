#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Number ");
    scanf("%d",&num);
    
    if(num % 2 == 0) {
        printf("Number %d is a Even Number",num);
        return 0;
    }
    printf("Number %d is a Odd Number",num);
    return 0;
    
}

