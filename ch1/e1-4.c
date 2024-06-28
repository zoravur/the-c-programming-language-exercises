#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = -100, -80, ..., 300 */
int main() {
     int celsius, fahr;
     int lower, upper, step;

     lower = -100; /* lower limit of temperature scale */
     upper = 300; /* upper limit */
     step = 20; /* step size */
     celsius = lower;
     printf("Celsius\tFahrenheit\n");
     while (celsius <= upper) {
         fahr = 9*celsius / 5 + 32;
         printf("%d\t%d\n", celsius, fahr);
         celsius = celsius + step;
     }
} 
