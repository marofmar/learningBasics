#include <stdio.h>

int length(char* pstr);

main()
{
    int len = length("abcde");

    print(" Length = %d", len); //5
}

int length(char* pstr)
{
    int len = 0;

    while(*pstr != NULL)
    {
        pstr++;
        len++;
    }

    return len; 
}