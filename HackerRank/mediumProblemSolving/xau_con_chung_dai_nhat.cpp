#include <iostream>
#include <algorithm>

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
    
    string res = "";
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (x[i - 1] == y[j - 1]) {
            res += x[i - 1];
            --i;
            --j;
        } else if (f[i - 1][j] > f[i][j - 1]) {
            --i;
        } else {
            --j;
        }
    }

    reverse(res.begin(), res.end());
    
    cout << res;
    
    return 0;
}