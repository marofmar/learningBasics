/* ltoa */
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    long value;
    char string[100];
    int radix; 

    radix = 2; //binary

    value = 12345;
    ltoa(value, string, radix);
    printf("Transformed one is %s\n", string);

    vlaue = -12345;
    ltoa(value, string, radix);
    printf("Transformed one is %s.\n", string); 
}