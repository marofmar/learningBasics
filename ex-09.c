#include <stdio.h>

main()
{
    int i; // define integer varialbe i
    int hap =0; // define int variable hap, and initialize with 0
/*
for statement runs like this:
1. i is initialized as 1
2. while i is less or equal to 10 the loop keeps running
3. adding 1 to current hap is the next hap value
3. i increases by 1
*/
    for (i = 1; i <=10; i = i+1)
    {
        hap = hap +1;
    }
    printf("Sum from 1 to 10: %d", hap);
}