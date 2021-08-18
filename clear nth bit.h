#include <stdio.h>
int main()
{
    int number, bit_pos;
    printf("Enter the Number:");// Get the number input 
    scanf("%d", &number);
    printf("Enter the Bit position you want to clear(Between 0-31):");//Get the bit position input 
    scanf("%d", &bit_pos);
    // Calculating the bit mask
    int num = (1 << bit_pos);
    //~(bitwise not, it's convert o to 1 or 1 to 0.) 
    number = number & (~num);
    printf("The number after clear the bit in the given position is: %d", number);
    return 0;
}
