#include <iostream>
#include <vector>
using namespace std;

string s, t = "";
int len;
vector<bool> vistited(1000, true);
vector<string> ans;

void Try(int i) {
	for (int j = 0; j < len; ++j) {
		if (vistited[j]) {
			t += s[j];
			vistited[j] = false;
			int n = t.length();
			if (n == len) {
				ans.push_back(t);
			}
			else {
				Try(i + 1);
			}
			t.pop_back();
			vistited[j] = true;
		}
	}
}

int main() {
    cin >> s;
    len = s.length();
    Try(1);
    int sz = ans.size();
    for (int i = sz - 1; i >= 1; --i) {
    	cout << ans[i] << '\n';
	}
    return 0;
}
