#include <iostream>
using namespace std;


int main() {
	char c; cin >> c;
	int d = (int)c;

	if (d >= 48 && d <= 57) {
		int temp = c - '0';
		cout << temp * temp;
	} else if (d >= 65 && d <= 90) {
		cout << char(d + 32);
	} else if (d >= 97 && d <= 122) {
		cout << char(d - 32);
	} else {
		cout << "Hello, Dat!";
	}

    return 0;
}