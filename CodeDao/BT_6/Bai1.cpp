#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool binary_search(vector<int> a, int n, int k) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == k)
            return true;
        else if (a[mid] > k)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return false;
}

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n, 0), b(m, 0);
    
    for (int &x : a) cin >> x;
    for (int &y : b) cin >> y;
    
    sort(begin(a), end(a));
    
    bool flag = true;
    
    for (int i = 0; i < m; ++i) {
        bool check = binary_search(a, n, b[i]);
        if (!check) {
            flag = false;
            break;
        }
    }
    
    if (flag)
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}