#include <stdio.h>

/* shrink multiple spaces into a single space */
main()
{
    int c, pc, nc;

    nc = pc = c = 0;
    while ((c = getchar()) != EOF) {
        nc = c;
        if (nc == ' ') {
            if (nc != pc) {
                putchar(c);
            }
        }
        else
            putchar(c);

        pc = nc;
    }

}
