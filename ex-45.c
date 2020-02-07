#include <stdio.h>

enum {Sun= 0, Mon, Tue, Wed, Thr, Fri, Sat};

main()
{
    printf("%d", Sun); //0
    printf("%d", Mon); //1
    printf("%d", Fri); //5
}