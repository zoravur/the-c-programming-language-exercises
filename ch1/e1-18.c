/**
 * Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input,
 *  and to delete entirely blank lines.
 */

#include <stdio.h>
#define MAXLINE 80 /* maximum input line length */

int _getline(char s[], int lim);

/* print the longest input line */
int main() {
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */
    while (_getline(line, MAXLINE) != EOF) {
        if (line[0] != '\0')
            printf("%s\n", line);
    }
    return 0;
}

int _getline(char s[], int lim) {
    int c, i;
    int last = -1;

    for (i=0; i < lim-1 && (c = getchar()) != EOF && (c != '\n'); ++i) {
        s[i] = c;
        // check if c is character
        if (c != ' ' && c != '\t') {
            // c is a character, save its position
            last = i;
        }
    }
    s[last+1] = '\0'; // truncate after last non-char digit
    return c;         // only matters if EOF
}







/* getline: read a line into s, return length */
// int _getline(char s[],int lim) {
//     int c, i;
//     int last = 0;
//     for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
//         s[i] = c;
//         if (c != ' ' && c != '\t' && c != '\n') {
//             last = c;
//         }
//     }
//     printf("s[last]: %c\n", s[last]);
//     s[last] = '\0';
// 
//     return c;
// }

