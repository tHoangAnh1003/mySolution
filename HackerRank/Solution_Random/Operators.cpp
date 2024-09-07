#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int maxN = 105;

int a[maxN][maxN];
int b[maxN][maxN];
int c[maxN][maxN];

void nhapmatran(int a[][maxN], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
}

void tinhtoan(int a[][maxN], int b[][maxN], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        nhapmatran(a, n, m);
        nhapmatran(b, n, m);
        tinhtoan(a, b, n, m);
    }
    return 0;
}
