#include <iostream>
#include <vector>
using namespace std; 

int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    
    for (int &x : a) cin >> x;
    
    int m; cin >> m;
    vector<int> b(m, 0);
    
    for (int &y : b) cin >> y;
    
    int index = 0;
    bool flag = false;
    
    for (int i = 0; i < m; ++i) {
        if (a[index] == b[i])
            index ++;
        else {
            if (a[0] == b[i])
                index = 1;
            else
                index = 0;
        }
        
        if (index == n) {
            flag = true;
            break;
        }
    }
    
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    
    return 0;
}