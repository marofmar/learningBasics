/* sprintf */

#include <stdio.h>

void main(void)
{
    char cValue = 'a';
    int iValue = 1234567;
    long lValue = 7890123;
    float fValue = 3.141592;
    double dValue = 3.141592;
    char *string = "Korea";
    char buffer[100];

    sprintf(buffer, "char type %c", cValue);
    puts(buffer);

    sprintf(butter, "long type %ld", lValue);
    puts(buffer);

    sprintf(buffer, "float type %f", fValue);
    puts(buffer);

    sprintf(buffer, "double type %e", dValue);
    puts(buffer);

    sprintf(buffer, "char* type %s", string);
    puts(buffer); 
}