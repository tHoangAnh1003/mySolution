#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    int a[n];
    
    for (int i = 0; i < n; ++i) {
    	cin >> a[i];
	}
	
	bool flag = false;
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (a[j] - a[i] == 1) {
				flag = true;
			}
		}
	}
    
    if (flag == true)
    	cout << "YES";
    else
    	cout << "NO";
    
    return 0;
}
