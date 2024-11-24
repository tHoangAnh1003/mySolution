#include <iostream>
#include <math.h> 
using namespace std;

bool nt(int n) {
	if (n < 2) return false;
	
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0)
			return false;
	}
	
	return true;
}

int main() {
	int n; cin >> n;
	int a[n];
	
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		if (nt(a[i])) {
			cnt += 1;
		}
	}
	
	cout << cnt;
	
    return 0;
}