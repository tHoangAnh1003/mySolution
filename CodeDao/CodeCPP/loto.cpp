#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a[3][3];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    int t; cin >> t;
    while (t--) {
        int x; cin >> x;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (x == a[i][j])
                    a[i][j] = 0;
            }
        }
    }

    if (a[1][1] == a[2][2] && a[2][2] == a[0][0] && a[0][0] == 0) {
        cout << "YES";
    } else {
        bool flag = false;
        for (int i = 0; i < n; ++i) {
            if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] == 0) {
                flag = true;
                break;
            }
            if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] == 0) {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES";
        else   
            cout << "NO";
    }

    return 0;
}
