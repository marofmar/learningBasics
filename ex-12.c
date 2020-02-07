#include <stdio.h>

main()
{
    int i; // -2,147,483,648~ +2,147,483,647
    unsigned int j; // 0~4,294,967,295
    int k;

    i = 2000000000;
    j = 4000000000;
    k = 'b'; // ASCII value 98 

    printf("int variable i's value is %d\n", i);
    printf("int variable j's value is %d\n", j);
    printf("int variable k's value is %d\n", k);
}