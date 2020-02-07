#include <stdio.h>

#define HUNDRED 100

const char j = 10;

main()
{
    //HUNDRED = 200; //error
    //j = 200; //error

    printf("Char const HUNDRED value is %d\n", HUNDRED);
    printf("char const j's value is %d\n", j); 
}