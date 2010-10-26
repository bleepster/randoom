#include "randoom.h"

long int randoom(void)
{
    long int rval = 0;
    struct timeval tv;

#if defined (__linux__)
    struct drand48_data buff;
    long int res;
#endif

#if defined (__linux__)
    gettimeofday(&tv, NULL);
    srand48_r(tv.tv_usec, &buff);
    lrand48_r(&buff, &res);
    rval = (res % (tv.tv_usec + 1)) / 100;
#elif (defined (__FreeBSD__) || defined (__OpenBSD__))
    gettimeofday(&tv, NULL);
    rval = (arc4random() % (tv.tv_usec + 1)) / 100;
#else
    gettimeofday(&tv, NULL);
    srand((tv.tv_sec + tv.tv_usec) >> (sizeof(long) / 2));
    rval = (random() % (tv.tv_usec + 1)) / 100;
#endif

    return (rval);
}
