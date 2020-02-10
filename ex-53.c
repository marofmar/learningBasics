#include <stdio.h>

void main(void)
{
    int count; // will count till 3
    int tmp; // temporarily read the entered number as tmp
    int total =0; // for summing up

    for (count = 1; count <=2; count ++)
    {
        printf("Enter a %dth integer and press Enter: \n", count); 
        scanf("%d", &tmp); 
        //scanf("%d, %d, %d", &tmp1, &tmp2, &tmp3); // to read three numbers at one shot

        total += tmp; 

        printf("Entered: %d, total Sum: %d\n", tmp, total);
    }

    printf("Total sum of the entered integers are %d\n", total); 
}