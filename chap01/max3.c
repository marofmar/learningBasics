/* Get the maximum out of three numbers*/

#include <stdio.h>

int main(void)
{
    int a, b, c;
    int max; 
    print("Get the maximum out of the three integers.\n");
    print("a: "); scanf("%d", &a);
    print("b: "); scanf("%d", &b);
    print("c: "); scanf("%d", &c);
    max = a;
    if(b>max) max = b;
    if(c>max) max = c;

    print("The maximum is %d. \n", max);
}