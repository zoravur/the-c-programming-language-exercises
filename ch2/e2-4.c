/**
 * Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.
 */

#include <stdio.h>

#define ASCIIRANGE 128
#define MAXLEN 1000

int _getline(char s[]) {
    int i, c;
    for (i = 0; i < MAXLEN-1 && ((c = getchar()) != EOF) && (c != '\n'); ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
}

void squeeze(char s[], char t[]) {
    int c[ASCIIRANGE] = {};
    int i, j;
    i = 0;
    while (t[i] != '\0') {
        c[t[i]] = 1;
        ++i;
    }

    //printf("%d, %d\n", i, j);
    for (i = j = 0; s[j] != '\0'; j++) {
        if (!c[s[j]]) // character is not in t
            s[i++] = s[j];
     //   printf("%d, %d\n", i, j);
    }
    s[i] = '\0';
}

int main() {
    char s[MAXLEN];
    char t[MAXLEN];

    _getline(s);
    _getline(t);
    squeeze(s, t);
    printf("%s\n", s);

    return 0;
}
