#include <iostream>
#include <cmath> 
using namespace std;

int ans(int n) {
	if (n == 0)
		return 0;
	else {
		int s = n % 10;
		if (s % 2 == 0) {
			return s * s + ans(n / 10);
		} else {
			return s * s * s + ans(n / 10);
		}
	}
}

int main() {
    int n,m;
	cin >> n;
	int s=0; 
	while (n>0) {
		m=n%10;
		n/=10; 
	
		if (m%2==0) {
			s+=pow(m,2) ;
		} 
		else {
			s+=pow(m,3); 
		} 
	} 
	
	cout << s; 
    return 0;
}
