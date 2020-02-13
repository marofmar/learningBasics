/* memset */

#include <stdio.h>
#include <string.h>

void main(void)
{
    char string[50] = "My dear cat Pepper is walking around the living room.";

    puts(string);

    memset(string, (int)NULL, sizeof(string));
    memset(string, '*', sizeof(string)-1);

    puts(string); 
}