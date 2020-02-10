/* search "sky" within the input word */
// gets(), strcmp()

#include <stdio.h>
#include <string.h> 

#define SKY "sky"

void main(void) 
{
    char string[100];
    int ret;

    printf("Enter an English word and press 'Enter'.\n");
    printf("Entering 'sky' would end the program.\n");

    do
    {
        gets(string);
        ret = strcmp(string, SKY);

        if (ret ==0)
        {
            printf("%s == %s, ret = %d\n", string, SKY, ret);
            break;
        }
        else if(ret <0) printf("%s < %s, ret = %d\n", string, SKY, ret);
        else printf("%s > %s, ret = %d\n", string, SKY, ret);
    } while (1);
}