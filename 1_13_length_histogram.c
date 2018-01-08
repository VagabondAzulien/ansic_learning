#include <stdio.h>

/* histogram of lengths of each word input */
main()
{
    int c, nc;
    int wl[12];

    c = nc = 0;
    for (int i = 0; i < 12; ++i)
        wl[i] = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == ' ' || c == '\n' || c == '\t') {
            if ((nc-1) > 10) {
                ++wl[11];
                nc = 0;
            }
            else {
                ++wl[(nc-1)];
                nc = 0;
            }
        }
    }

    c = 0;

    printf("Word Length Histogram\n");
    printf("=====================\n");
    printf("##  || Frequency\n");
    printf("----++-------------\n");
    for (int i = 0; i < 11; ++i) {
        printf("%3d || ", i);
        while (c < wl[i]) {
            printf("+");
            ++c;
        }
        printf("\n");
        c = 0;
    }
    printf("11+ || ");
    while (c < wl[11]) {
        printf("+");
        ++c;
    }
    printf("\n");
}
