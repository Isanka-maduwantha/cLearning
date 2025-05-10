#include <stdio.h>

int main()
{
    printf("Enter Three numbers:\t");
    int x,y,z,max;
    scanf("%d %d %d",&x,&y,&z);
    
    if(x > y && x>z) {
        max = x;
    } else if( y > x && y > z) {
        max = y;
    } else {
        max = z;
    }
    printf("Highest of three is %d \n",max);
    
    return 0;
}
