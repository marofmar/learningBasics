/* ultoa */
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    unsigned value;
    char string[100];
    int radix; 

    radix = 16; // hexadecimal

    value = 34567;
    ultoa(value, string, radix);
    printf("Transformed one is %s.\n", string);

    value = 123456789;
    ultoa(value, string, radix);
    printf("Transformed one is %s.", string); 
}