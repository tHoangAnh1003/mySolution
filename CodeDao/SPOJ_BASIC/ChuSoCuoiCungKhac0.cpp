#include <bits/stdc++.h>
using namespace std;

const int a[] = {1, 1, 2, 6, 4};

int mu2(int n) {
	if (n % 4 == 0) return 6;
	if (n % 4 == 1) return 2;
	if (n % 4 == 2) return 4;
	if (n % 4 == 3) return 8;
	return 1; 
}

int chuso(int n) {
	if (n == 0 || n == 1) return 1; 
	else if (n < 5) return a[n];
	else {
		return (mu2(n / 5) * chuso(n / 5) * a[n % 5]) % 10;
	}
}

int main() {
	int n = 99999;
	cout << chuso(n);
}
