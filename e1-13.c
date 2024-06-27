/**
 * Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
 * easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 */

#include <stdio.h>        

#define MAX_WORD_LENGTH 1000
#define WORD_FINISHED 0
#define WORD_STARTED 1

#define HIST_CHAR '#'

int main() {
    int c, len, state;
    int maxlen = 0;

    int counts[MAX_WORD_LENGTH] = {};

    len = 0;
    state = WORD_FINISHED;
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            if (state == WORD_STARTED) {
                ++counts[len];
                if (len > maxlen) {
                    maxlen = len;
                }
            }
            state = WORD_FINISHED;
            len = 0;
        } else {
            state = WORD_STARTED;
            ++len;
        }
    }

    for (int i = 1; i <= maxlen; i++) {
        printf("\t%d: ", i);
        for (int j = 0; j < counts[i]; ++j) putchar(HIST_CHAR);
        putchar('\n');
    }
}

