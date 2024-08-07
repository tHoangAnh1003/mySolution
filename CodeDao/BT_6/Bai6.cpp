#include <iostream>
using namespace std;

const int maxN = 100;

int n, k;
bool v[maxN];
string s = "";

void Try(int index) {
    for (int i = 0; i < n; ++i) {
        if (!v[i]) {
            s = s + char(i + 97);
            int len = s.length();
            v[i] = true;
            
            if (len == k) {
                cout << s << '\n';
            }
            else
                Try(index + 1);
            s.pop_back();
            v[i] = false;
        }
    }
}

int main() {
    cin >> n >> k;
    Try(1);

    return 0;
}