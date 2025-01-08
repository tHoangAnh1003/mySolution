#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    int x, y; cin >> x >> y;
    int b[x][y];
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cin >> b[i][j];
        }
    }

    int row = 0, col = 0;

    bool flag = false;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == b[row][col]) {
                col++;
            }
            if (row == x - 1 && col == y - 1) {
                flag = true;
                break;
            }
            if (col == y) {
                row++;
                col = 0;
            }
        }
        if (flag)
            break;
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
