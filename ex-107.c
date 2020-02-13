/* using pointer in a function */
#include <stdio.h>

void change_x1(int x1);
void change_x2(int *x2);

void main(void)
{
    int x; 

    x = 5;
    printf("x value before calling the function: %d\n", x);

    change_x1(x);
    printf("x after calling 'changd_x1()': %d\n", x);

    change_x2(&x1);
    printf("x after calling 'change_x2()': %d\n", x);
}

void change_x1(int x1)
{
    x1 = 50;
}

void change_x2(int *x2)
{
    *x2 = 100;
}