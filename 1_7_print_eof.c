#include <stdio.h>

/* copy input to output */
main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);

    printf("%d means EOF!\n", EOF);
}
