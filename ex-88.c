/*gcvt */
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    double value;
    char buffer[100];

    value = 3.14e10;
    gcvt(value, 3, buffer);

    printf("Transformed one is %s.\n", buffer);

    
    value = -3.14e10;
    gcvt(value, 3, buffer);

    printf("Transformed one is %s.\n", buffer);
}