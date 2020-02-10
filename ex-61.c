/* check wether a word starts with 'sky' */

#include <stdio.h>
#include <string.h> 

#define SKY "sky" 

void main(void)
{
    char string[100];
    int ret; 

    printf("Enter an English word and press enter: \n");
    printf("Entering 'sky' will end the program.\n");

    do
    {
        /* code */
        gets(string);

        ret = strcmp(string, SKY, 3); //comparing strings 3bytes

        if(ret == 0)
        {
            printf("%3.3s == %s, ret = %d\n", string, SKY, ret); 
            break;
        }
        else if(ret <0) printf("%s < %s, ret = %d\n", string, SKY, ret);
        else printf("%s > %s, ret = %d\n", string, SKY, ret);
    } while (1);
    


}