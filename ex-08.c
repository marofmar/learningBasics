#include <stdio.h>

int hapf(int value);

main()
{
    printf("Sum from 1 to 10 is %d\n", hapf(10));
    printf("Sum from 1 to 100 is %d\n", hapf(100));
    printf("Sum from 1 to 1000 is %d\n", hapf(1000));
}

int hapf(int value)
{
    int i;
    int hap = 0;

    for (i = 1; i <= value; i = i+1)
    {
        hap = hap +1;
    }
    
    return hap; 
}