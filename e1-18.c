/**
 * Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
 */
//
#include <stdio.h>
#define MAXLINE 80 /* maximum input line length */
//
int _getline(char s[], int lim);
//
/* print the longest input line */
int main() {
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */
    while ((len = _getline(line, MAXLINE))) {
        if (len > 0)
            printf("%s\n", line);

    }
    return 0;
}
//  
/* getline: read a line into s, return length */
int _getline(char s[],int lim) {
    int c, i;
    int last = 0;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
        if (c != ' ' && c != '\t') {
            last = c;
        }
    }
    s[last+1] = '\0';

    return last;
}

