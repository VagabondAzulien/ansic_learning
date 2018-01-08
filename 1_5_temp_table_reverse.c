#include <stdio.h>

#define     LOWER   0   /* lower limit of table */
#define     UPPER   300 /* upper limit */
#define     STEP    20  /* step size */

/* print Fahrenheit-Celsius table, but different */
main()
{
    int fahr;

    printf("%s\n%3s %6s\n", "Degree Table", "F", "C");

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
