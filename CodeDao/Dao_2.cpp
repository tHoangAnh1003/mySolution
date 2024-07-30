#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<int> f(20000, -1);

bool is_Prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0)
            return false;
    
    return n >= 2;
}

int ans(int n) {
    if (is_Prime(n))
        return 1 + ans(n - 1);
    
    if (n <= 1) return n;
    int max_val = n;
    
    if (f[n] != -1) return f[n];
    
    for (int i = sqrt(n); i >= 2; --i)
        if (i * (n / i) == n) {
            max_val = max(i, n / i);
            break;
        }
            
    f[n] = min(ans(max_val), ans(n - 1)) + 1;
    return f[n];
}

int main() {
    int n; cin >> n;
    
    cout << ans(n);
    
    return 0;
}