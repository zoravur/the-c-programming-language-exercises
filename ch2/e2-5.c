/**
 * Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
(The standard library function strpbrk does the same job but returns a pointer to the
location.)
 */
#include <unistd.h>
#include <stdio.h>

int any(const char *s1, const char *s2) {
    int index[128] = {};
    for (int i = 0; s2[i] != '\0'; ++i) index[s2[i]] = 1;

    int j;
    for (j = 0; s1[j] != '\0'; ++j) {
        if (index[s1[j]]) return j;
    }

    return -1;
}

int main() {
    char *s1, *s2;
    size_t n1, n2;
    s1=s2=NULL;
    getline(&s1, &n1, stdin);
    getline(&s2, &n2, stdin);
    printf("%d\n", any(s1, s2));
}

