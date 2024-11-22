#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    int a[n];
    
    for (int i = 0; i < n; ++i) {
    	cin >> a[i];
	}
	
	int maxVal = -10000, minVal = 10000;
	int index1 = 0, index2 = 0;
    
    for (int i = 0; i < n; ++i) {
    	if (maxVal <= a[i]) {
    		maxVal = a[i];
    		index1 = i + 1;
		}
		
		if (minVal >= a[i]) {
			minVal = a[i];
			index2 = i + 1;
		}
	}
    
    cout << maxVal << ' ' << index1 << endl;
    cout << minVal << ' ' << index2 << endl;
    
    return 0;
}
