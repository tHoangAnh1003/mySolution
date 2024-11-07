#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
	int sum = 0;
	for (int i = 1; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			sum += i;
			if(i != n / i) {
				sum += n / i;
			}
		}
	}

	return sum;
}

int main() {
	int a; cin >> a;
	int count = 0;

	for (int i = 2; i <= a; ++i) {
		if (solve(i) >= 2 && solve(i) <= a) {
			count += 1;
		}
	}

	cout << count;

	return 0;
}
