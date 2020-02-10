/* strtod */
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *string = " 1.234E-10";
    char *stop;
    double value;

    value = strtod(string, &stop);

    printf("%d strings have transformed.\n", stop-string);
    printf("String [%s] is %E in numbers.\n", string, value);
}