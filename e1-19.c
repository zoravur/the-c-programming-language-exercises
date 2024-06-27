/**
 * Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
 * write a program that reverses its input a line at a time. 
 */

#include <stdio.h>
#define MAXLINE 80 /* maximum input line length */

int _getline(char s[], int lim);

void reverse(char s[], int len);

/* print the longest input line */
int main() {
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */
    while ((len = _getline(line, MAXLINE)) > 0) {
        reverse(line, len);
        printf("%s", line);
    }
    return 0;
}

int _getline(char s[], int lim) {
    int c, i;

    for (i=0; i < lim-1 && (c = getchar()) != EOF && (c != '\n'); ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
    ++i;
}

void reverse(char s[], int len) {
    char tmp[MAXLINE];
    copy(tmp, s);

    for (int i = len - 1; i >= 0; --i) {
        s[len-1-i] = tmp[i];
    }
}
