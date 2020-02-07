#include <stdio.h>
//Understanding Macro! 

#define MAX(a,b) a>b? a: b
#define MIN(a,b) a<b? a: b

main()
{
    int i, j;

    i = 5;
    j = 7;

    printf("Maximum %d\n", MAX(i,j));
    printf("Minimum %d\n", MIN(i,j));
}