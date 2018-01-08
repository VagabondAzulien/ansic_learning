#include <stdio.h>

/* display each word on it's own line */
main()
{
    int c;

    c = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ')
            putchar('\n');
        else
            putchar(c);
    }
}
