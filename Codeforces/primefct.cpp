#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {
	long long n; cin >> n;
	
	vector<pair<long long, int>> v;

	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			int cnt = 0;
			while (n % i == 0) {
				cnt += 1;
				n /= i;
			}
			v.push_back({1ll*i, cnt});
		}
	}

	if (n != 1) {
		v.push_back({n, 1});
	}

	cout << v.size() << '\n';

	for (auto it : v) {
		cout << it.first << ' ' << it.second << '\n';
	}


	return 0;
}

