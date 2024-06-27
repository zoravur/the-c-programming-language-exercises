/**
 * Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
 */
//
#include <stdio.h>
#define MAXLINE 11 /* maximum input line length */
//
int _getline(char s[], int lim);
//
/* print the longest input line */
int main() {
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */
    while ((len = _getline(line, MAXLINE)) > 0) {
        printf("%d\n", len);
        // printf("%s\n", line);
        /*
        if (len > 80) {
            printf("%s\n", line);
        }
        */
    }
    return 0;
}
//  
/* getline: read a line into s, return length */
int _getline(char s[],int lim) {
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    if (c != EOF && c != '\n') {
        // we are not at the end of the word
        // get full length of word
        for (; (c=getchar())!=EOF && c!='\n'; ++i)
        {}
        ++i;
    }
    return i;
}

