#include <bits/stdc++.h>
using namespace std;

int n;
int sum = 0;
bool visited[10001];
int a[100001];
set<vector<int>> s;

void Try(int index) {
	for (int i = 1; i <= n; ++i) {
		if (!visited[i]) {
			visited[i] = true;
			a[index] = i;
			sum += i;
			if (sum == n) {
//				cout << sum << '\n';
				vector<int> v;
				for (int j = 1; j <= index; ++j) {
//					cout << a[j] << ' ';
					v.push_back(a[j]);
				}
				sort(v.begin(), v.end());
				s.insert(v);
			} else if (sum < n) {
				Try(index + 1);
			}
			sum -= i;
			visited[i] = false;
		}
	}
}

int main() {
    cin >> n;
    Try(1);
	cout << s.size();
    return 0;
}
