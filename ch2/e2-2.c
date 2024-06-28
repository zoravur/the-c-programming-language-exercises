for (i = 0; i < lim-1; ++i) {
    if ((c = getchar()) == '\n') { --i; break }
    if (c == EOF) { --i; break }
    s[i] = c;
}
