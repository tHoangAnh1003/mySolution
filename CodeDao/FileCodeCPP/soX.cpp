#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;

    int n = s.length();
    s = 'x' + s;
    int ans = 0;
    int index = 0;

    for (int i = 1; i <= n; ++i) {
        if (s[i] == '?')
            index = i;
        else
            ans += i * (s[i] - '0');
    }


    int start = 0;
    if (index == 1) {
        start = 1;
    }

    bool flag = false;

    for (int i = start; i <= 9; ++i) {
        int temp = ans + i * index;
        if (temp % 7 == 0) {
            cout << i;
            flag = true;
            break;
        }
    }

    if (!flag)
        cout << -1;

    return 0;
}
