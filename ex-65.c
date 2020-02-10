/* search 'h' in input */

#include <stdio.h>
#include <string.h>

#define FIND_CHAR 'h'

void main(void)
{
    char string[100]; 
    char *ret; 

    puts("Enter a string and press enter: \n");
    puts("If your input contains 'h' in it, this program will end.\n");

    do
    {
        /* code */
        gets(string);

        ret = strchr(string, FIND_CHAR);

        if(ret!=NULL)
        {
            puts("Your input does not have 'h' in it.\n");
        }
        else
        {
            printf("%dth position has 'h' in the input.\n", ret-string);
            break;
        }
        
    } while ({1});
    
}