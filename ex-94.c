/* isspace */
#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char *string "This is my cat, \tPepper.\n";
    int cnt = 0;

    while(*string)
    {
        if(isspace(*string))
        {
            cnt++;
        }
        string++;
    }
    printf("The number of tab, space, and line-change is %d.\n", cnt);

}