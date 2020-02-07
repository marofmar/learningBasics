#include <stdio.h>

main()
{
    int x = 1;

    print("x = %d\n", x++); //1
    printf("x = %d\n",x++); //2
    printf("x = %d\n", ++x); //4
}