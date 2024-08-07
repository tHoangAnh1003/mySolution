#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> a(2 * n, 0);
    
    map<int, int> mp;
    
    for (int i = 0; i < 2 * n; ++i) {
        cin >> a[i];
        mp[a[i]] ++;
    }
    
    int sum = 0;
    
    for (auto it : mp) {
        if (it.second == 1)
            sum += it.first;
    }
    
    cout << sum;
    
    
    return 0;
}