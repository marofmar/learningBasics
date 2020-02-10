/* comparing strings using strcmp() */

#include <stdio.h>

#define SKY "sky"

int My_strcmp(const char* string1, const char* string2);

void main(void)
{
    char string[100];
    int ret;

    printf("Enter a word and preess enter.\n");
    printf("Entering 'sky' would end the program.\n");

    do
    {
        /* code */
        gets(string);

        ret = My_strcmp(string, SKY);

        if(ret ==0)
        {
            printf("%s == %s, ret == %d\n", string, SKY, ret);
            break;
        }
        else if(ret <0) printf("%s < %s, ret=%d\n", string, SKY, ret);
        else printf("%s>%s, ret = %d\n", string, SKY, ret);
    } while (1);
    
}

int My_strcmp(const char* string1, const char* string2)
{
    if (*string1 == (int)NULL && *string2 == (int)NULL) return 0; // if both strings are NULL, return 0 

    while (*string1 != (int)NULL)
    {
        if(*string2 == (int)NULL) return 1; // nothing left to compare in string2, return 1

        if(*string1 == *string2) // if string1 and string2 point to the same, add 1 each to compare the next 
        {
            string1++;
            string2++;
            continue; // to line 39
        }

        if(*string1<*string2) return -1; // if string1 is smaller, return -1, else, if string1 is bigger, return 1
        else return 1;
    }

    if(*string2 != (int)NULL) return -1;

    return 0; 
}