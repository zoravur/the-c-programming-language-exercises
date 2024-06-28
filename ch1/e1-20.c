/**
 * Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter?
 */
#include <stdio.h>


int MAXLINE = 1000;
int TABSTOP = 8;

int positive_modulo(int i, int n) {
    return ((i % n) + n) % n;
}

int main() {
    int c, col;
    col = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            putchar('\n');
            col = 0;
        } else if (c == '\t') {
            // int num = TABSTOP - positive_modulo(col, TABSTOP); 
            do {
                putchar(' ');
                ++col;
            } while (col % TABSTOP != 0);
        } else {
            putchar(c);
            ++col;
        }
    }
}
