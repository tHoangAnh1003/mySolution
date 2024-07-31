void trim_left(char *s) {
    char* left = s;
    
    while (*left == ' ') {
        left ++;
    }
    
    if (left != s) {
        char *d = s;
        while (*left) {
            (*d ++) = (*left ++);
        }
        *d = '\0';
    }
}