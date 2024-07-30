void delete_char(char *S, char c) {
    char *write = S;
    char *read = S;
    while (*read) {
        if (*read != c) {
            *write = *read;
            write ++;
        }
        read ++;
    }
    
    *write = '\0';
}