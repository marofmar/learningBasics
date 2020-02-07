#include <stdio.h>
#include <conio.h>

#define ENTER 14

void main(void)
{
    int ch;

    print("Enter a key that will transform into ASCII code...\n");
    printf("Press Enter to shut down the program.\n");

    do
    {
        ch = getch();

        print("Key: (%c), ASCII: (%d)\n", ch, ch);
    }while (ch!=ENTER);
    
}