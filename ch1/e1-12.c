#include <stdio.h>


#define WORD_FINISHED 0
#define WORD_STARTED 1

int main() {
    int c, state;

    state = WORD_FINISHED;
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            if (state == WORD_STARTED) {
                putchar('\n');
            }
            state = WORD_FINISHED;
        } else {
            putchar(c);
            state = WORD_STARTED;
        }
    }
}
        

