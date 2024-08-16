#include <bits/stdc++.h>
using namespace std;

int a[1000][1000];
int n;

void loang(int i, int j, int& sum) {
	int x = i + 1;
	int y = j + 1;
	if (x >= 0 && x < n && y >= 0 && y < n) {
		sum += a[x][y];
		loang(x, y, sum);
	}
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i){
    	for (int j = 0; j < n; ++j) {
    		cin >> a[i][j];
		}
	}
	
	int ms = -1000;
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int s = a[i][j];
			loang(i, j, s);
			ms = max(ms, s);
		}
	}
	
	cout << ms;
	
    return 0;
}
