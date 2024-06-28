#include <stdio.h>
#include <limits.h>

int main() {

    printf("%d <= char <= %d\n", CHAR_MIN, CHAR_MAX);
    printf("%d <= signed char <= %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("%u <= unsigned char <= %u\n", 0, UCHAR_MAX);
    printf("%d <= int <= %d\n", INT_MIN, INT_MAX);
    printf("%u <= unsigned int <= %u\n", 0, UINT_MAX);
    printf("%ld <= long <= %ld\n", LONG_MIN, LONG_MAX);
    printf("%lu <= unsigned long <= %lu\n", (unsigned long)0, ULONG_MAX);

    char cmin, cmax;
    signed char scmin, scmax;
    unsigned char ucmin, ucmax;
    int imin, imax;
    unsigned int uimin, uimax;
    long lmin, lmax;
    unsigned long ulmin, ulmax;
    unsigned long bits = 0;

    cmin = cmax = scmin = scmax = ucmin = ucmax = imin = imax = uimin = uimax
        = lmin = lmax = ulmin = ulmax = bits = 0;

    cmin = cmax = scmin = scmax = ucmin = ucmax = imin = imax = uimin = uimax
        = lmin = lmax = ulmin = ulmax;





    

    return 0;
}
