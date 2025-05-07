#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Number ");
    scanf("%d",&num);
    
    if(num > 0) {
        printf("Number %d is a Positive Number",num);
        
    } else if(num < 0) {
        printf("Number %d is a Nagative Number",num);
    } else {
        printf("Zero is a Netural  ");
    }
    
    
    return 0;

    
