/* realloc */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void main(void)
{
    char *pmem;
    pmem = malloc(100);

    if(pmem == NULL)
    {
        puts("Not able to allocate memory.");
    }
    else
    {
        printf("Allocated %d bytes of memory. \n", _msize(pmem));
        pmem = realloc(pmem, 200);

        if(pmem==NULL)
        {
            puts("Not able to allocate memory.");
        }
        else
        {
            printf("Reallocated %d bytes of memory.\n", _msize(pmem));
        }
        free(pmem); 
        
    }
    
}