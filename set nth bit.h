#include <stdio.h>
int main()
{
    int number,bit_pos;
    /* Get the number input */
    printf("Enter the number:");
    scanf("%d", &number);
    /* Get the bit position input */
    printf("Enter the Bit position to set(Between 0-31):");
    scanf("%d", &bit_pos);
    /* Calculating the bit mask*/
    int num=(1<<bit_pos);
        number=number|num;
    printf("The number after set the bit in the given position is: %d",number);
    return 0;
}
