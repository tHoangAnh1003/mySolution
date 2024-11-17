#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

const int maxN = 1000000;
int a[maxN];


int main() {
    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // 1 2 2 3 3 5 5 7 
    // 1 2 3 5 7

    sort(a, a + n);

    cout << a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i - 1]) {
            cout << a[i] << ' ';
        }
    }

    return 0;
}
