void rFilter(char *s) {
    // Your code goes here
    int n = strlen(s);
    
    char* right = s + n - 1;
    
    while (right >= s) {
        if ((*right < 'a' || *right > 'z') && (*right < 'A' || *right > 'Z')) {
            *right = '_';
        } else {
            break;
        }
        right--;
    }
    
    // *(s) = '_';
    // *(s + 1) = '\0';
}