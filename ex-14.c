#include <stdio.h>

main()
{
    int b;
    int j;

    b = 10>5;
    j = 10> 20;

    printf("Bool variable b's value is %d\n", b);
    printf("Bool variable j's value is %d\n", j); 

    if (b)
    {
        printf("10>5 is true.\n");
    }
    else
    {
        print("10>5 is false.\n");
    }
    if (j)
    {
        printf("10>20 is true.\n");
    }
    else
    {
        printf("10>20 is false.\n");
    }
    
    if (-1)
    {
        printf("-1 is true.\n");
    }
    else
    {
        printf("-1 is false.\n");
    }
    
    
}