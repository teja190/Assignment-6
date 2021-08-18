#include <stdio.h>
#define bits sizeof(int)*8 
int main()
{
    int num, msb;
    printf("enter num:");
    scanf("%ld",&num);
    msb=1<<(bits-1);    //1<<31 00011111 =32 and 
    if(num & msb)      //logic and operator 
    {
        printf("The most significant bit %d is set(1)",num);
    }  
    else 
    {
        printf("The most  significant bit %d is unset(0)",num);
        
    }
}
