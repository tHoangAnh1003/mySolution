#include <iostream>
#include <cmath>
using namespace std;

int d[20004];
int ans[20004];

int main() {
    int n; cin >> n;
    int a[n], b[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    int maxDay = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < b[i]; ++j) {
            d[a[i]+j] += 1;
            maxDay = max(maxDay, a[i]+j);
        }
    }

    for (int i = 1; i <= maxDay; ++i) {
        ans[d[i]]++;
    }

    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << ' ';
    }

    return 0;
}
