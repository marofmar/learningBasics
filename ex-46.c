#include <stdio.h>

#define true 1
#define false 0

typedef int bool; //defining a datatype

main()
{
    bool bCondition;
    bCondition = true;

    if(bCondition == true)
    {
        printf("Contition is true.");
    }
}