#include <iostream>
using namespace std;

void nhiPhan(unsigned long long n) {
    if (n < 2)
        cout << n % 2;
    else {
        nhiPhan(n / 2);
        cout << n % 2;
    }
}

int main() {
    unsigned long long n; cin >> n;
    nhiPhan(n);
    return 0;
}
