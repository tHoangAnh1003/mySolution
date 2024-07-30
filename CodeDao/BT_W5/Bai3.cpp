#include <cstring>

void pad_left(char *s, int n) {
    int len = strlen(s);
    if (len > n) return;
    
    int pad = n - len;
    for (int i = len; i >= 0; --i) {
        s[i + pad] = s[i];
    }
    
    for (int i = 0; i < pad; ++i)
        s[i] = '_';
}