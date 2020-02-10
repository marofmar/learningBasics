/* strdup, string duplicates */

#include <stdio.h>
#include <string.h>
#include <malloc.h> //memory allocation I assume.

void main(void)
{
    char string[100];
    char *pstr; //pointer string

    puts("Enter strings and press enter key: \n");
    puts("Entering nothing will end the program. \n");

    do
    {
        /* code */
        gest(string);
        if(strlen(string) ==0) break;

        pstr = strdup(string);
        strcpy(string, "temporary string");

        printf("string: %s\n", string);
        printf("pstr: %s\n", pstr);

        free(pstr); //allocated memory frees up 
    } while (1);
    
}