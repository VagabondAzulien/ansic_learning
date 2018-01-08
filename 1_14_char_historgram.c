#include <stdio.h>

/* print histogram of frequency of different characters */
main()
{
    int c, nc;
    int cl[256];

    c = nc = 0;
    for (int i = 0; i < 257; ++i)
        cl[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            ++cl[256];
        }
        else {
            ++cl[c-0];
        }
    }

    c = 0;

    printf("Character Histogram\n");
    printf("===================\n");
    printf("Char  || Frequency\n");
    printf("------++----------\n");
    for (int i = 0; i < 255; ++i) {
        if (cl[i] > 0) {
            printf("%5c", i);
            printf(" || ");
            while (c < cl[i]) {
                printf("+");
                ++c;
            }
            printf("\n");
            c = 0;
        }
    }
    printf("Other || ");
    while (c < cl[256]) {
        printf("+");
        ++c;
    }
    printf("\n");
}
