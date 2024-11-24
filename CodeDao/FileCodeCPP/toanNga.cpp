#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap a= "; cin >> a;
    cout << "Nhap b= "; cin >> b;
    
    // cin >> a >> b;

    long long ans = 0;
    while (b >= 1) {
        if (b & 1)
            ans += a;
        a <<= 1;
        b >>= 1;
    }
    
    cout << "Tich= " << ans;

    return 0;
}