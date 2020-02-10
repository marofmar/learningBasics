/*strtoul, binary to decimal*/
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *string = "11000";
    char *stop;
    int radix;
    unsigned long value;

    radix = 2;

    value = strtoul(string, &stop, radix);

    printf("%d strings have transformed.\n", stop-string);
    printf("binary %s is %u in decimal.\n", string, value);
}