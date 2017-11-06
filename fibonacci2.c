#include <stdio.h>
#include <stdlib.h>

int main (void) {
    unsigned long i = 1;
    printf ("0\n");
    while (((i & 0xffff0000) >> 16) + (i & 0xffff) <= 0xffff) {
       
	    printf ("%d\n", i & 0xffff);
        i = ((i & 0xffff) << 16) | ((i >> 16) + (i & 0xffff));
    }
    return 0;
}
