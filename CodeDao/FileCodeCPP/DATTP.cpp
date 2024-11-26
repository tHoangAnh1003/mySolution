#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int k; cin >> k;
	vector<int> v(n);

	for (int &x : v) { cin >> x; }
	map<int, int> mp;

	int ans = 0;

	for (int i = 0; i < n; ++i) {
		ans += mp[k - v[i]];
		mp[v[i]] ++;
	}

	cout << ans << '\n';

}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
