#include <cstring>

void trim_right(char *s) {
    int len = strlen(s);
    char* right = s + len - 1;
    int n = len;
    while (right >= s) {
        if (*right == ' ')
            n --;
        else
            break;
        right--;
    }
    
    *(s + len) = '\0';
}