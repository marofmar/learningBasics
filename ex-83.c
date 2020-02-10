/* itoa */
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int value;
    char string[100];
    int radix; 

    radix = 10; // decimal number system

    value = 5;
    itoa(value, string, radix);
    printf("Transformed string is %s\n", string);

    value = -12345;
    itoa(value, string, radix);
    printf("Transformed string is %s\n", string); 
}