#include <iostream>

using namespace std;

const int maxN = 1001;
int f[maxN][maxN];

int main() {
    string x, y; cin >> x >> y;
    int n = x.length(), m = y.length();
    
    f[0][0] = 0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (x[i - 1] == y[j - 1]) {
                f[i][j] = f[i - 1][j - 1] + 1;
            } else {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }
    
    // cout << f[n][m] << '\n'; 
    
    int index = n;
    
    for (int i = 1; i <= m; ++i) {
        if (f[index][i] != f[index][i - 1]) {
            cout << y[i - 1];
        }
    }
    
    return 0;
}