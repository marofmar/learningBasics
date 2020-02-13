/* localtime */
#include <stdio.h>
#include <time.h>

void main(void)
{
    time_t now;
    struct tm t;

    time(&now);

    t = *localtime(&now);

    printf("Current date and time: %4d.%d.%d %d:%d:%d\n",
    t.tm_year+1900, t.tm_mon+1, t.tm_mday,
    t.tm_hour, t.tm_min, t.tm_sec);




}