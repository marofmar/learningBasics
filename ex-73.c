/* strlwr, chaing into lower letters */
#include <stdio.h>
#include <string.h>

void main(void)
{
    char string[100];

    puts("Enter string inputs and press enter: \n");
    puts("Entering nothing will end the program. \n");

    do
    {
        /* code */
        gest(string);

        if(strlen(string) ==0) break;

        strlwr(string);
        puts(string);
    } while (1);
    
}