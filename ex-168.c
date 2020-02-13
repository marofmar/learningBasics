/* time */

#include <stdio.h>
#include <time.h>

void main(void)
{
    time_t now; // time_t long type

    time(&now);
    printf("From Jan 1 1970 to now %d seconds.\n", now);
}