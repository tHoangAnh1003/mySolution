#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int x; cin >> x;

    bool flag = true;

    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
            cout << i + 1;
            flag = false;
            break;
        }
    }

    if (flag)
        cout << 0;
    return 0;
}
