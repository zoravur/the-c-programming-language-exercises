#include <stdio.h>

#define HTOI_LIM 50

int _getline(char s[]);

int htoi(char s[]) {
    int result = 0;

    for (int i = 0; i < HTOI_LIM; ++i) {
        if (s[i] == '\0') break;
        switch (s[i]) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                result *= 16;
                result += s[i] - '0';
                break;
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
                result *= 16;
                result += s[i] - 'a' + 10;
                break;
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
                result *= 16;
                result += s[i] - 'A' + 10;
            default:
                break;
        }
        printf("%d\n", result);
    }
    return result;
}

int main() {
    char line[HTOI_LIM];

    while (_getline(line) > 0) {
        printf("%d\n", htoi(line));
    }
}

int _getline(char s[]) {
    int i, c;
    for (i = 0; i < HTOI_LIM-1 && ((c = getchar()) != EOF) && (c != '\n'); ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
}
