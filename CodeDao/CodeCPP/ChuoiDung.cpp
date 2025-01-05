#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.length();
    
    int point = 0;
    int index = 0;
    bool check = false;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '.') {
            point ++;
            index = i;
        }
        if (!(s[i] >= '0' && s[i] <= '9') && s[i] != '.')
            check = true;
    }
    
    if (point > 1 || index == n - 1 || check || s[0] == '.') {
        cout << "NO\n";
    } else {
        bool flag = false;
        int cnt = 0;
        for (int i = n - 1; i > index; --i) {
            if (s[i] != '0') {
                flag = true;
                break;
            } else {
                cnt ++;
            }
        }
        
        if (!flag || cnt > 0 || (index != 1 && s[0] == '0')) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}