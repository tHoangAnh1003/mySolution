#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v1, v2;

	long long sum1 = 0, sum2 = 0;

	for (int i = 0; i < n; ++i) {
		int value; cin >> value;

		if (value & 1) {
			v1.push_back(value);
			sum1 += value;
		} else {
			v2.push_back(value);
			sum2 += value;
		}
	}

	if (v1.empty()) {
		cout << "Simple\n";
		return 0;
	}

	int a1 = v1.size();

	sort(begin(v1), end(v1), greater<int>());

	long long ans = sum1 + sum2;

	if (!(a1 & 1)) {
		ans -= v1[a1 - 1];
	}

	if (ans & 1) {
		cout << ans << '\n';
	} else {
		cout << "Simple\n";
	}

	return 0;
}
