#include <stdio.h>

int fahr_to_cels(int fahr) {
    return 5 * (fahr-32) / 9;
}

int main() {
    int fahr, celsius;
    int lower, upper, step;
    lower = 0; upper = 300; step = 20;
    fahr = lower;
    while (fahr <= upper) {
        printf("%d\t\t%d\n", fahr, fahr_to_cels(fahr));
        fahr += step;
    }
}
