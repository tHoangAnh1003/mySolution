#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, n;
	cin >> a >> b >> c >> n;

	double x = 1.0 * n / (a + b);

	int start = floor(x);
	int end = ceil(x);

	int temp = 0;
	
	bool flag = true;

	for (int i = start * a; i < end * a; ++i) {
		temp = i + start * b;
		if (temp == n) {
			cout << 1ll * i * c << '\n';
			flag = false;
			break;
		}
	}

	if (flag) {
		cout << 1ll * end * (a + b) * c << '\n';
	}

	return 0;
}
