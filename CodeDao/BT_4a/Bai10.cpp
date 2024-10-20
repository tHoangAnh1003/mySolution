#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n; cin >> n;
    
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                cnt += 1;
                n /= i;
            }
            cout << i << ' ' << cnt << '\n';
        }
    }
    
    if (n != 1) {
        cout << n << ' ' << 1;
    }
    
    return 0;
}