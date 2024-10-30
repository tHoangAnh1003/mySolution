#include <bits/stdc++.h>
using namespace std;

const int maxN = 1000005;

int n, k, a[maxN], b[maxN], sum = 0;
bool used[maxN];
set<vector<int>> v;

void Try(int index) {
	for (int i = 0; i < n; ++i) {
		if (!used[i]) {
			sum += a[i];
			used[i] = true;
			b[index] = a[i];
			if (sum == k) {
				vector<int> temp(b + 1, b + index + 1);
				sort(begin(temp), end(temp));
				v.insert(temp);
			} else if (sum < k) {
				Try(index + 1);
			}
			sum -= a[i];
			used[i] = false;
		}
	}
}

int main() {
	cin >> n >> k;

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	Try(1);

	cout << v.size() << '\n';

	// In ra cac so co tong bang k
	for (auto it : v) {
		for (int x : it) {
			cout << x << ' ';
		}
		cout << '\n';
	}

	return 0;
}
