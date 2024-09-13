#include <iostream>
#include <climits>
using namespace std;

const int maxN = int(1e6);
int a[maxN];

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) { cin >> a[i]; }
    
    int maxVal = INT_MIN;
    int index = 0;
    
    for (int i = 0; i < n; ++i) {
        maxVal = max(maxVal, a[i]);
    }
    
    for (int i = 0; i < n; ++i) {
        if (a[i] == maxVal) {
            index = i;
            break;
        }
    }
    
    cout << maxVal << ' ' << index + 1 << '\n';

    return 0;
}