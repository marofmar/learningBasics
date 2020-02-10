/* strset
Having input, and returning a string that fills up the entire with the first letter received from the input. (why...) */

#include <stdio.h>
#include <string.h>

void main(void)
{
    char string[100];

    puts("Press enter after giving string inputs.: \n");
    puts("Entering nothing would end the program. \n");

    do
    {
        /* code */
        gets(string);

        if(strlen(string)==0) break;

        strset(string, string[0]);
        puts(string);
    } while ({1});
    
}