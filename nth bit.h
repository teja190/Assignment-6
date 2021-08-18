#include <stdio.h>
int main()
{
    int number,bit_pos;
    printf("Enter the Number:"); /* Get the number input */
    scanf("%d", &number);
    
    printf("Enter the Bit position you want to get(Between 0-31):"); /* Get the bit position input */
    scanf("%d", &bit_pos);
    
    int mask=(1<<bit_pos);  /* Calculating the bit mask*/
    /* Checking the Given Position bit is 0 or 1*/
    if (number & mask)
        printf("%d number %d Position bit is 1.\n",number,bit_pos);
    else
        printf("%d number %d Position bit is 0.\n",number,bit_pos);
    return 0;
}
