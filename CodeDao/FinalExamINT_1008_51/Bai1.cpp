#include <iostream>
#include <cmath>
using namespace std;

string prime(int n) {
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0)
			return "NO\n";
	}
	if (n < 2) return "NO\n";
	return "YES\n";
}

int main() {
    int n; cin >> n;
    cout << prime(n);
    return 0;
}
