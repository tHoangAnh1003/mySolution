#include <ios>
#include <iostream>
using namespace std;

bool check(int n, int socuoi) {
	if (n < 10) {
		return socuoi == n;
	}
	
	return check(n / 10, socuoi);
}

int main() {
    int n;
	cin >> n;

	int socuoi = n%10;
	n /= 10;

	cout << boolalpha << check(n, socuoi);

	// while (n>=10) {
	// 	n/=10;
	// }
	
	// if (n==socuoi) {
	// 	cout << 1; 
	// }
	// else {
	// 	cout << 0; 
	// }
    return 0;
}
