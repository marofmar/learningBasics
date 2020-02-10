/* free */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define MEGA 1024*1024 // 1MB = 1024*1024 bytes

void main(void)
{
    int i;
    char *pmem;

    for (i = 0; i <10; i++)
    {
        pmem = malloc(MEGA);
        if(pmem == NULL)
        {
            puts("Not able to allocate memory.");
        }
        else
        {
            puts("Allocated 1MB memory.");

            free(pmem);
            puts("Allocated memory freed.")
        }
        
    }
}