#include <iostream>
using namespace std;

void show(int n) {
	if (n < 2) {
		cout << n % 2;
		return;
	}
	show(n / 2);
	cout << n % 2;
}

int solve(int n) {
	if (n < 10)
		return n;
	return solve(n / 10);
}

int main() {
	int n; cin >> n;
	cout << solve(n);
    return 0;
}
