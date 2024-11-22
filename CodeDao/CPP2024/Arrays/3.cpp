#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    int a[n];
    
    for (int i = 0; i < n; ++i) {
    	cin >> a[i];
	}
	
	int lonNhat = -100000;
	for (int i = 0; i < n; ++i) {
		lonNhat = max(lonNhat, a[i]);
	}
	
	cout << lonNhat << ' ';
	
	int maxvalue =1000;
	for(int i=0;i< n;i++) {
		int b = lonNhat - a[i];
		if (b < maxvalue && b != 0) {
	    	maxvalue = b;
		}
	}
	
	cout << lonNhat - maxvalue;
    
    return 0;
}
