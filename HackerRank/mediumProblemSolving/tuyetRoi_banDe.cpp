#include <bits/stdc++.h>
using namespace std;

const int maxN = 1000000;

set<int> ans() {
	set<int> s;

	for (int i = 2; i <= 10000; ++i) {
		int sum = 1;
		int index = 1;
		while (sum <= maxN) {
			if (index >= 3) {
				if (sum <= maxN) {
					s.insert(sum);
				} else {
					break;
				}
			}
			sum = sum + int(pow(i, index));
			index += 1;
		}
	}

	return s;
}

bool binarySearch(vector<int> v, int a) {
	int low = 0;
	int high = int(v.size()) - 1;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (v[mid] == a) {
			return true;
		} else if (v[mid] < a) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	return false;
}

int main() {
	set<int> s = ans();

	vector<int> v = vector<int>(begin(s), end(s));

	int q; cin >> q;
	while (q--) {
		int k; cin >> k;
		if (binarySearch(v, k)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

	return 0;
}
