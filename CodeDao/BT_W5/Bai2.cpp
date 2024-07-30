#include <cstring>

void pad_right(char *s, int n) {
    int len = strlen(s);
    if (len >= n) return;
    char* left = s + len;
    while (left < (s + n)) {
        *left = '_';
        left ++;
    }
    *(s + n) = '\0';
}