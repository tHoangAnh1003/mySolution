#include <iostream>
using namespace std;

int main() {
    long long n; cin >> n;
    int maxVal = -1;

    while (n > 0) {
        int a = n % 10;
        maxVal = max(maxVal, a);
        n /= 10;
    }

    cout << maxVal;
    return 0;
}
