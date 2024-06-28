/**
 * Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print
 * the length of arbitrary long input lines, and as much as possible of the text. 
 */

#include <stdio.h>
#define MAXLINE 10 /* maximum input line length */

int _getline(char s[], int lim);

void copy(char to[], char from[]);

/* print the longest input line */
int main() {
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    max = 0;
    while ((len = _getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
}

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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
    ++i;
}
