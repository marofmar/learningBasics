#include <stdio.h>

main()
{
    int x = 5;
    int y = 2;

    if (x>0 && x<10) //and
    {
        printf(" 0<x<10\n");
    }

    if (x<0 || y==2) //or
    {
        printf("x is less than zero or y is 2.\n");
    }

    if (!(x>y))
    {
        printf("x is not bigger than y.\n");
    }
}