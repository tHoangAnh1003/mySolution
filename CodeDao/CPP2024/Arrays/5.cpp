#include <bits/stdc++.h>
using namespace std;

bool tangDan(int n) {
	int soSau = n % 10;
	n /= 10;
	
	while (n > 0) {
		int a = n % 10;
		if (a > soSau)
			return false;
		else {
			soSau = a;
		}
		n /= 10;
	}
	return true;
}

bool giamDan(int n) {
	int soSau = n % 10;
	n /= 10;
	
	while (n > 0) {
		int a = n % 10;
		if (a < soSau)
			return false;
		else {
			soSau = a;
		}
		n /= 10;
	}
	return true;
}

int main() {
    int n; cin >> n;
    if (tangDan(n) || giamDan(n))
    	cout << "YES";
    else
    	cout << "NO";
    
    return 0;
}
