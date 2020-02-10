/* return the length of the strings */

#include <stdio.h>
#include <string.h>

void main(void)
{
    char string[200];

    printf("Enter a sentence and press enter: \n");
    printf("Enter nothing to end the program. \n");

    do
    {
        /* code */
        gets(string);

        if(strlen(string) == 0)
        {
            break;
        }

        printf("The length of the sentence is %d.\n", strlen(string));
    } while ({1});
    
}