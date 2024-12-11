#include <iostream>
#include <string.h>
using namespace std;

/// 1234
/// 1243
/// Kiem tra cac so trong mang khong giam, hoac khong tang
/// 1234 int

bool kg(char s[]) {
    for (int i = 1; i < strlen(s); ++i) {
        if (s[i] < s[i-1])
            return false;
    }
    return true;
}

bool kt(char s[]) {
    for (int i = 1; i < strlen(s); ++i) {
        if (s[i] > s[i-1])
            return false;
    }
    return true;
}

int main() {
    char c[1005];
    cin >> c;

    if (kg(c) || kt(c))
        cout << "YES";
    else
        cout << "NO";

}
