/* fcvt */
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    double value;
    char *pstr;
    int dec, sign;

    value = 3.1415926535;
    pstr = fcvt(value, 6, &dec, &sign);

    printf("Transformed one is %s.\n", pstr);
    printf("decimal point locaion is %d, sign is %d.\n", dec, sign);

    value = -3.1415926535;
    pstr = fcvt(value, 6, &dec, &sign);

    printf("Transformed one is %s.\n", pstr);
    printf("decimal point locaion is %d, sign is %d.\n", dec, sign);

}