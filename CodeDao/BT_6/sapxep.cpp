#include <bits/stdc++.h>
using namespace std;

#define maxN 100
int a[maxN];

int main() {
	int n; cin >> n;
	
	for (int i = 0; i < n; ++i) { cin >> a[i]; }

	sort(a, a + n, [](int a, int b) -> bool {
		if (a % 2 == 0 && b % 2 == 0)
			return a < b;
		else if (a % 2 != 0 && b % 2 != 0)
			return a > b;
		else if (a % 2 == 0 && b % 2 != 0)
			return true;
		return false;
	});

	for (int i = 0; i < n; ++i)
		cout << a[i] << ' ';
	
	cout << '\n';

	return 0;
}
