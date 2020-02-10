/*calloc */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void main(void)
{
    char *pmem;
    printf("sizeof(int)'s length is %d.\n", sizeof(int));

    pmem=calloc(100, sizeof(int));

    if(pmem==NULL)
    {
        puts("Not able to allocate memory.");
    }
    else
    {
        puts("Allocated buffer that can store 100 integer variables.");

        free(pmem);          
    }
    
}