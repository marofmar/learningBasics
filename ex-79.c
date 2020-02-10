/*strtol, hexadecimal to decimal */

#include <stdio.h>
#include<stdlib.h>

void main(void)
{
    char *string = "0xFF";
    char *stop;
    int radix; 
    long value;

    radix = 16;

    value = strtol(string, &stop, radix);

    printf("%d strings have changed.\n", stop-string);
    printf("Hexadecimal %s is %ld in the decimal.\n", string, value)
}
