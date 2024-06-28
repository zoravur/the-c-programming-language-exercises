/**
 * Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
 * in its input.
 */

#include <stdio.h>        

#define ASCIILENGTH 128
#define WORD_FINISHED 0
#define WORD_STARTED 1

#define HIST_CHAR '#'

int main() {
    int c;

    int counts[ASCIILENGTH] = {};
    while ((c = getchar()) != EOF) {
        ++counts[c];
    }

    for (int i = 32; i < ASCIILENGTH; i++) {
        printf("\t%c: ", i);
        for (int j = 0; j < counts[i]; ++j) putchar(HIST_CHAR);
        putchar('\n');
    }
}

