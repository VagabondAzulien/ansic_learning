#include <stdio.h>

/* count tabs, blanks, and newlines */
main()
{
    int c, tb, sp, nl;

    tb = sp = nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            ++tb;
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++sp;
    }

    printf("%d tabs, %d blanks, and %d newlines.\n", tb, sp, nl);
}
