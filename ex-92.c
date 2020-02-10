/* isupper */
#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char *string = "This is Pepper. My cat.";
    char buffer[100] = [0,];
    int cnt = 0;

    while(*string)
    {
        if(isupper(*string))
        {
            buffer[cnt++]=*string;

        }
        string++;
    }
    puts(buffer); 
}