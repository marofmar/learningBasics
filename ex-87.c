/* ecvt */
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    double value;
    char *pstr;
    int dec, sign;

    value = 3.14e10;
    pstr = ecvt(value, 3, &dec, &sign);

    printf("Trnasformed one is %s.\n", pstr);
    printf("Decimal point loacation is %d, and sign is %d.\n", dec, sign);

    value = -3.14e10;
    pstr = ecvt(value, 3, &dec, &sign);

    printf("Trnasformed one is %s.\n", pstr);
    printf("Decimal point loacation is %d, and sign is %d.\n", dec, sign);
}