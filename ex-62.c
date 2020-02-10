/* concatenate strings */ 

#include <stdio.h>
#include <string.h> 

void main(void)
{
    
    char string1[100]; //string1 should have a sufficient buffer to prevent errors. 
    char string2[100];

    printf("Enter the first word: \n");
    gets(string1);

    printf("Enter the second word: \n");
    gets(string2); 

    strcat(string1, string2);

    puts(string1); 
}