/* strnset, strnset only changes predetermined number of strings */

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
        gets(string);

        if(strlen(string) ==0) break;

        strnset(string, '*', 5);

        puts(string);
    } while (1);
    
}