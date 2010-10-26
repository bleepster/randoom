#include "../src/randoom.h"

#include <stdio.h>


int main(void)
{
    int i;

    for (i = 0; i < 10; ++i) {
        printf("%ld\n", randoom());
    }
 
    return (0);
}
