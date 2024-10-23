#include <bits/stdc++.h>
using namespace std;

int main() {

	ifstream in("ADDSUBTRACT.INP");
	ofstream out("ADDSUBTRACT.OUT");

	string s; in >> s;

	int n = s.length();

	int neg = (s[0] == '-') ? -1 : 1;
	int start = (s[0] == '+' || s[0] == '-') ? 1 : 0;

	long long ans = 0;
	string t = "";

	for (int i = start; i < n; ++i) {
		if (isdigit(s[i])) {
			t += s[i];
		} else {
			ans += 1ll * neg * stoll(t);
			t = "";
			neg = (s[i] == '+') ? 1 : -1;
		}
	}

	if (!t.empty())
		ans += 1ll * neg * stoll(t);

	out << ans;
	
	return 0;
}
