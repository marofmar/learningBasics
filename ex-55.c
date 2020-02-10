/*
Get a text, and count how many 'a' in them.
*/

#include <stdio.h>

int count(char *str);

void main (void)
{
    char string[100]; // a buffer to store characters when reading the text, and maximum 99 characters. as the last is reserved for NULL.
    char *ret; // Pointer variable to have the returned value of gets() function. 

    ret = gets(string); 

    if(ret!=NULL)
    {
        printf("The number of 'a' in the text is %d\n", count(string));
    }
}

int count(char *str)
{
    int cnt = 0;

    while (*str!=(int)NULL)
    {
        if(*str++ == 'a')cnt++;
    }

    return cnt;
}