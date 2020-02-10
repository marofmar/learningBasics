/* atof, transform string to floats*/
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *string1 = "2.1 is bigger than 1.0.";
    char *string2 = "This year is 2020.";
    char *string3 = "Today is Feb 10.";

    double t1, t2, t3;

    puts(string1);
    puts(string2);
    puts(string3);

    t1 = atol(string1);
    t2 = atol(string2);
    t3 = atol(string3);

    printf("floats transformed from strings: %.lf, %.lf, %.lf \n", t1, t2, t3);
    printf("Total sum: %.2f\n", t1+t2+t3);
}