#include <stdio.h>

main()
{
    int x = 1;
    int y = 2;
    int z;
    int zz;

    z = x+y;

    zz = printf("z's value: %d\n", z); //3 
    printf("zz's value: %d\n", zz); //12 byte 
}