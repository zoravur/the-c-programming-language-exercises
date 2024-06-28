#include <stdio.h>

/* count lines in input */
int main() {
    int c;
    int bl, t, nl;

    bl = t = nl = 0;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\n':  ++nl;   break;
            case  ' ':  ++bl;   break;
            case '\t':  ++t;    break;
        }
    }
    printf("blanks: %d\ntabs: %d\nnewlines: %d\n", bl, t, nl);
}

