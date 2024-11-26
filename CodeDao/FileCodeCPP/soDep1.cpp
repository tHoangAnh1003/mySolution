#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
    }
    
    return true;
}

bool beautiNumber(ll n) {
	ll m = n;
	ll temp = 0;
	while (m) {
		temp = temp * 10 + m % 10;
		m /= 10;
	}
	return temp == n;
}

void solve() {
	ll a, b; cin >> a >> b;
	int s = ceil(sqrt(a));
	int e = floor(sqrt(b));

	int ans = 0;
	for (int i = s; i <= e; ++i)
		if (isPrime(i) && beautiNumber(1ll * i * i))
			ans += 1;

	cout << ans << '\n';
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
