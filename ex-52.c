#include <stdio.h>
#include <conio.h>
// making a function named 'print' that prints.
int print(char *string);

void main(void)
{
    print("This is a putch function.");
}

int print(char *string)
{
    int len = 0;

    while (*string != (char)NULL)
    {
        putch(*string);
        string++;
        len++;
    }

    putch('\r');
    print('\n');

    return len;
} 