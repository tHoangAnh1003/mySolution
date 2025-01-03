#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // Nguyen    Tien Dat => Nguyen Tien Dat

    char c[1000];
    cin.getline(c, 1000);
    
    char a[100][100];
    int row = 0, col = 0;
    
    for (int i = 0; i < strlen(c); ++i) {
        if (c[i] >= 'a' && c[i] <= 'z') {
            a[row][col++] = c[i];
        } else {
            if (col != 0)
                row++;
            col = 0;
        }
    }
    
    if (col != 0)
        row ++;
    
    for (int i = 0; i < row; ++i) {
        if (a[i][0] >= 'a' && a[i][0] <= 'z')
            a[i][0] -= 32;
            
        for (int j = 1; j < strlen(a[i]); ++j) {
            if (a[i][j] >= 'A' && a[i][j] <= 'Z')
                a[i][j] += 32;
        } 
    }
    
    for (int i = 0; i < row; ++i)
        cout << a[i] << ' ';
    
    return 0;
}