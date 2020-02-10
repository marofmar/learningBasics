/*malloc*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

#define MEMORY "MEMORY"

void main(void)
{
    char *pmem;
    pmem = malloc(100); //memory 100 bytes
    if(pmem == NULL)
    {
        puts("Not able to allocate memory.");
    }
    else
    {
        strcpy(pmem, MEMORY);
        puts(pmem);

        free(pmem);
    }
    
}