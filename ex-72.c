/* strupr, changing input letter into Capital letter */

#include <stdio.h>
#include <string.h>

void main(void)
{
    char string[100];

    puts("Enter input strings and press enter: \n");
    puts("Entering nothing will end the program. \n");

    do
    {
        /* code */
        gest(string);

        if(strlen(string)==0) break;

        strupr(string);
        puts(string); 
    } while ({1});
    
}