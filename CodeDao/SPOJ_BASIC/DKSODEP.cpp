#include <iostream>
using namespace std;

bool checkNumber(int n) {
	int reveseNumber = 0;
	int number = n;
	int sum = 0;

	while (n) {
		int a = n % 10;
		reveseNumber = reveseNumber * 10 + a;
		sum = sum + a;
		n /= 10;
	}

	return (reveseNumber == number) && (sum % 10 == 0);
}

int main() {
	int l, r;

	while (cin >> l >> r) {
		int ans = 0;
		for (int i = l; i <= r; ++i) {
			if (checkNumber(i))
				ans += 1;
		}
		cout << ans << '\n';
	}

	return 0;
}
