#include <stdio.h>

main()
{
    unsigned char ch = 255, mask = 0x7F;

    printf("%d\n", ch); //255
    printf("%d\n", ch&mask); //127 
    /*
      1111 1111
    & 0111 1111
      =========
      0111 1111 <- 127
    */
    printf("%d\n", (char)~ch); //0
    printf("%d\n", ch^ch); //0 exclusive. only if 0&1 or 1&0 is 1
    printf("%d\n", ch>>1); //127
    printf("%d\n", mask<<1);  //254
}