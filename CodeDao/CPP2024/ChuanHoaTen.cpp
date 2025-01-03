#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int T; cin >> T;
    cin.ignore();
    while (T--) {
        char c[1000];
        cin.getline(c, 101);
        
        if (c[0] >= 'a' && c[0] <= 'z')
            c[0] -= 32;
        
        for (int i = 1; i < strlen(c); ++i) {
            if (c[i - 1] == ' ') {
                if (c[i] >= 'a' && c[i] <= 'z')
                    c[i] -= 32;
            }
            else {
                if (c[i] != ' ') {
                    if (c[i] >= 'A' && c[i] <= 'Z')
                        c[i] += 32;
                }
            }
        }
        
        puts(c);
    }
    
    return 0;
}