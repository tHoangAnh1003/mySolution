#include <bits/stdc++.h>
using namespace std;

const int maxN = 100005;
int arr[maxN];

int main() {
	int n, a, b; cin >> n >> a >> b;
	int minVal = INT_MAX;

	map<int, int> brr;

	int minFre = INT_MAX;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];

		brr[arr[i]] ++;
	}


	for (auto it : brr) {
		minFre = min(minFre, it.second);
	}

	for (auto it : brr) {
		if (minFre == it.second) {
			minVal = it.first;
			break;
		}
	}
	
	cout <<  1ll * a * n - 1ll * brr[minVal] * b << ' ' << brr[minVal] << '\n';

	for (int i = 0; i < n; ++i) {
		if (arr[i] == minVal) {
			cout << i + 1 << ' ';
		}
	}

	return 0;
}
