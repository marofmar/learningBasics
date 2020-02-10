/* strspn */

#include <stdio.h>
#include <string.h>

void main(void)
{
    char *string = "this is really delicious!";
    char *strCharSet = "abcdefghijklmnopqrstuvwxyz "; // alphabet + a space
    unsigned int pos; 

    post = strspn(string, strCharSet); 

    puts("0    1    2    3");
    puts("0123456789012345678901234567890");
    puts(string);
    puts(strCharSet);

    printf("Found a not-matching character in %dth position.\n", pos);
}