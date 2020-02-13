/* memcpy
구조체 선언 struct and copy
 */

#include <stdio.h>
#include <string.h>

struct tagM1
{
    int x;
    int y;
    char buffer[30];
};

void main(void)
{
    struct tagM1 x1, x2; 

    x1.x = 5; // initialize x1 
    x1.y = 10;
    strcpy(x1.buffer, "memory copy");

    memcpy(&x2, &x1, sizeof(x1)); 
    // strcpy() only copies till NULL(0), hence strcpy is to copy strings, and memcpy() is to copy memory

    puts(x2.buffer);
}