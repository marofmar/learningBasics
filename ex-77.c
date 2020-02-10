/* atoi, transforms string into numberics */

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int count; // count three times
    int total = 0; // to store sum
    char string[100];

    for (count =1; count <=3, count ++)
    {
        printf("Enter %dth string and press enter key: \n", count);
        gets(string);
        total += atoi(string);

        printf("Entered input = %d, Sum = %d\n", atoi(string), total);
    }

    printf("Total sum of entered input is %d.\n", total);
}