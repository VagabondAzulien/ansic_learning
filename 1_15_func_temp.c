#include <stdio.h>

/* print Fahrenheit-Celsius table
 *  for fahr = 0, 20, ..., 300 */

float temp(float fahr);

float temp(float f)
{
   return (5.0/9.0) * (f-32); 
}

main()
{
    float fahr;
    int lower, upper, step;

    lower = 0;              /* lower limit of temperature table */
    upper = 300;            /* upper limit */
    step = 20;              /* step size */

    printf("%s\n%3s %6s\n", "Degree Table", "F", "C");

    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, temp(fahr));
        fahr = fahr + step;
    }
}
