#include <bits/stdc++.h>
#include <cctype>
#include <cstddef>
#include <unordered_map>
using namespace std;

int solve(string s) {
	unordered_map<char, int> mp = {{'H', 1}, {'C', 12}, {'O', 16}};
	stack<int> st;

	for (size_t i = 0; i < s.length(); ++i) {
		if (isalpha(s[i])) {
			st.push(mp[s[i]]);
		} else if (s[i] == '(') {
			st.push(-1); // danh dau vi tri cua dau dong ngoac
		} else if (s[i] == ')') {
			int sum = 0;
			while (st.top() != -1) {
				int value = st.top();
				sum += value;
				st.pop();
			}
			st.pop();
			st.push(sum);
		} else {
			int value = st.top();
			st.pop();
			value = value * (s[i] - '0');
			st.push(value);
		}
	}

	int ans = 0;

	while (!st.empty()) {
		ans += st.top();
		st.pop();
	}

	return ans;
}

int main() {
	int T; cin >> T;

	while (T--) {
		string s; cin >> s;

		cout << solve(s) << '\n';
	}	

	return 0;
}
