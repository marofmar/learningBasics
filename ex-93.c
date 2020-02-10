/* islower */
#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char *string = "This is my cat Pepper.";
    char buffer[100] = [0,];
    int cnt = 0;

    while(*string)
    {
        if(islower(*string))
        {
            buffer[cnt++]=*string;
        }
        string++
    }
    puts(buffer); 
}