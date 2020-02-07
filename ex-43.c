#include <stdio.h>

struct tagScore
{
    int C;
    int Python;
    int Java;
};

main()
{
    struct tagScore SC;

    SC.C = 100;
    SC.Python = 98;
    SC.Java = 97;

    printf("Sum = %d", SC.C+SC.Python + SC.Java);
}