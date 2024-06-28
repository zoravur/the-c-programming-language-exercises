/**
 * Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum
number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
When either a tab or a single blank would suffice to reach a tab stop, which should be given
preference? 
 */
#include <stdio.h>

int MAXLINE = 1000;
int TABSTOP = 8;

int _getline(char s[], int lim);

void entab(char s[], int lim);

void copy(char to[], char from[]);

int main() {
    int len;
    char line[MAXLINE];

    while ((len = _getline(line, MAXLINE)) > 0) {
        entab(line, len);
        printf("%s", line);
    }
}

int _getline(char s[], int lim) {
    int i, c;
    for (i = 0; i < lim-1 && ((c = getchar()) != EOF) && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
}

void entab(char s[], int lim) {
    char tmp[MAXLINE];

    int i = lim;
    tmp[i+1] = '\0';

    while (lim--) {
        if (lim % TABSTOP == TABSTOP-1 && s[lim] == ' ') {
            tmp[i--] = '\t';
            lim--;
            while (s[lim] == ' ' && lim) {
                if (lim % TABSTOP == TABSTOP-1) tmp[i--] = '\t';
                lim--;
            }
            if (s[lim] != ' ') {
                tmp[i--] = s[lim];
            }
        } else {
            tmp[i--] = s[lim];
        }
    }

    copy(s, tmp + i + 1);
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0') ++i;
}
