/*Copying strings using strcpy*/

#include <stdio.h>
#include <string.h>

#define KOREA "대한민국"

void main(void)
{
    char *string1;
    char string2[100];

    strcpy(string1, KOREA); // error: string1 used without having been initialized 
    strcpy(string2, KOREA);
    strcpy(string2, "Spring");
}