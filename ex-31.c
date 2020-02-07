#include <stdio.h>

main()
{
    char i;
    int j;
    double k; 

    printf("%d\n", sizeof(i)); //1
    printf("%d\n", sizeof(j)); //4
    printf("%d\n", sizeof(k));  //8
    // sizeof(short) 2, sizeof(long) 4
}