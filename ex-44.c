#include <stdio.h>

union tagVariant 
{
    int i;
    float d;
};

main()
{
    union tagVariant V;

    V.i = 0;
    V.d = 3.4;

    printf("V.i = %d\n", V.i);
    printf("V.d = %d\n", V.d); 
}