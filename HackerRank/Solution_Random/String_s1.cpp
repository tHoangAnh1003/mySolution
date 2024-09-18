#include <iostream>

using namespace std;

int main() {
    string s; cin >> s;
    char c; cin >> c;
    
    int n = s.length();
    
    string t = "";
    
    for (int i = 1; i < n - 1; ++i) {
        if (s[i + 1] == c && s[i - 1] == c && s[i] != c) {
            t += s[i];
        }
    }
    
    if (t.empty()) {
        cout << "NOT FOUND";
    } else {
        cout << t;
    }
    
    return 0;
}