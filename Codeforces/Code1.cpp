#include <iostream>
#include <cmath> 
using namespace std;


int main() {
	int n;

	do {
		cin >> n;
		if (n < 5 || n > 10)
			cout << "Nhap lai: ";
	} while (n < 5 || n > 10);
	
	cout << "N la " << n;
	
    return 0;
}