/* strrev, reversing input strings */
#include <stdio.h>
#include <string.h>

void main(void)
{
    char string[100];

    puts("Enter an English word and press enter key: \n");
    puts("Entering nothing will end the prgoram.\n");

    do
    {
        /* code */
        gets(string);
        if(strlen(string) == 0) break;

        strrev(string);
        puts(string); 
    } while (1);
    
}