#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'unboundedKnapsack' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */

int unboundedKnapsack(int k, vector<int> arr) {
    vector<vector<int>> dp(3000, vector<int>(3000, 0));
    vector<int> a(1, 0);
    for (int i = 0; i < arr.size(); ++i) {
        a.push_back(arr[i]);
    }
    for (int i = 1; i <= a.size(); ++i) {
        for (int j = 1; j <= k; ++j) {
            if (j >= a[i]) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - a[i]] + a[i]);
            }
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[arr.size()][k];
}

int main()
{
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for (int &i : v) { cin >> i; }
        cout << unboundedKnapsack(k, v) << "\n";
    }

    return 0;
}
