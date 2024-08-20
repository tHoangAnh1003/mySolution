#include <bits/stdc++.h>
using namespace std;


int main() {
    string s; cin >> s;
    int n = s.length();
    
    if (n == 3) {
    	int giua = s[1] - '0';
    	int tong = s[0] - '0' + s[2] - '0';
    	if (giua % tong == 0)
    		cout << "yes\n";
    	else 
    		cout << "no\n";
	} else {
		cout << "no\n";
	}
    
    return 0;
}
