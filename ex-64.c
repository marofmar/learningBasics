/*search a string in the input*/

#include <stdio.h>
#include <string.h>

#define SKY "sky"

void main(void)
{
    char stringp[100];
    char *ret;

    puts("Enter a string and press enter: \n");
    puts("If input contains 'sky' then the prgram ends.\n");

    do
    {
        /* code */
        gest(string);

        ret = strstr(string, SKY);

        if(ret == NULL)
        {
            puts("The input does not contain 'sky'\n");
        }
        else 
        {
            printf("%dth position has 'sky' in it.", ret-string);
            break;
        }
    } while ({1});
    
}