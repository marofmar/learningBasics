#include <stdio.h>

main()
{
    char ch; // char from -128~ +127, signed char
    unsigned char j; // unsigned char from 0 ~+255, if a value exceeds this boundary need to use int or unsigned int
    char k; 

    ch = 200;
    j = 200;
    k = 'a'; // 'a' ASCII value is 97

    printf("Character variable ch's value is %d\n", ch);
    printf("Chracter value j's value is %d\n", j);
    printf("k's value is %d\n", k); 
}