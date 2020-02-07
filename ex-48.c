#include <stdio.h> 

void print_x(int_x);
void print_gx(void);

int x = 20; //global variable 

main()
{
    int x = 5;
    print("x = %d\n", x)//local variable 5

    print_x(10);
    print_gx();
}

void print_x(int x)
{
    print("x = %d\n", x); //10
}

void print_gx(void);
{
    printf("x = %d\n", x); // 20 global
}