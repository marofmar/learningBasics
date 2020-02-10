/*
For beautifuly align numbers. 
*/

#include <stdio.h>

void main(void)
{
    int i = 100;
    int j = 1000;
    int k = 12345;

    //when not aligned
    printf("[%d]\n", j);
    printf("[%d]\n", k);
    printf("[%d]\n", i);

    //set up 5 spaces 
    printf("[%5d]\n", j);
    printf("[%5d]\n", k);
    printf("[%5d]\n", i);

    //set up 10 spaces
    printf("[%10d]\n", j);
    printf("[%10d]\n", k);
    printf("[%10d]\n", i);

    //Left aligned with 10 spaces
    printf("[%-10d]\n", j);
    printf("[%-10d]\n", k);
    printf("[%-10d]\n", i);

}