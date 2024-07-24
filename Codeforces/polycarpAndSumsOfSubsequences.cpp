#include <bits/stdc++.h>
using namespace std;


void solve() {
	vector<int> a(7, 0);
    for (int i = 0; i < 7; ++i) {
    	cin >> a[i];
	}

	cout << a[0] << ' ' << a[1] << ' ' << a[6] - a[0] - a[1] << '\n';
	
}

signed main() {
    int t; cin >> t;
    
    while (t--) {
    	solve();
	}
	
    return 0;
}
