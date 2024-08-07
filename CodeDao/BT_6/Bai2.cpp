#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    sort(begin(a), end(a));
    
    int value = 0;
    
    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i - 1]) {
            value = a[i];
            break;
        }
    }
    
    cout << value;
    return 0;
}