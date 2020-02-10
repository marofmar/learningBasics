/* atol */
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *string1 = "2 is bigger than 1.";
    char *string2 = "1004 sounds like 'ange' in Korean.";
    char *string3 = "This year is 2020.";
    char *string4 - "Today is February 10.";
    long t1, t2, t3, t4;

    puts(string1);
    puts(string2);
    puts(string3);
    puts(string4);

    t1 = atol(string1);
    t2 = atol(string2);
    t3 = atol(string3);
    t4 = atol(string4);

    printf("Transformed long from strings: %ld, %ld, %ld, %ld\n", t1, t2, t3, t4);
    printf("Total sum is %d.\n", t1+t2+t3+t4);
}