#include <iostream>
using namespace std;

long long powmod(long long a, long long n, long long m) {
    long long res = 1;
    a %= m;
    while (n) {
        if (n & 1) {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        n >>= 1;
    }
    return res;
}

int main() {
    long long a, b, c; cin >> a >> b >> c;
    
    cout << powmod(a, b, c);
    return 0;
}