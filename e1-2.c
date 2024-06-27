#include <stdio.h>

#define ESCAPE(c) "\c"

int main(int argc, char **argv) {

    printf("hello, world: \a; test\n");
    printf("hello, world: \b; test\n");
    printf("hello, world: \c; test\n");
    printf("hello, world: \d; test\n");
    printf("hello, world: \e; test\n");
    printf("hello, world: \f; test\n");
    printf("hello, world: \g; test\n");
    printf("hello, world: \h; test\n");
    printf("hello, world: \i; test\n");
    printf("hello, world: \j; test\n");
    printf("hello, world: \k; test\n");
    printf("hello, world: \l; test\n");
    printf("hello, world: \m; test\n");
    printf("hello, world: \n; test\n");
    printf("hello, world: \o; test\n");
    printf("hello, world: \p; test\n");
    printf("hello, world: \q; test\n");
    printf("hello, world: \r; test\n");
    printf("hello, world: \s; test\n");
    printf("hello, world: \t; test\n");
    printf("hello, world: \\u; test\n");
    printf("hello, world: \v; test\n");
    printf("hello, world: \w; test\n");
    printf("hello, world: \xa0; test\n");
    printf("hello, world: \y; test\n");
    printf("hello, world: \z; test\n");

    printf("hello, world: \b\b\b\b; test\n");
    printf("hello, world: \n\b\b\b\b; test\n");
    
}
