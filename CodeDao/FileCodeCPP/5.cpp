#include <iostream>
#include <math.h>
using namespace std;

void create(int a[], int &index, int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            a[index++] = i;
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    if (n != 1) {
        a[index++] = n;
    }
}

long long sum_of_divisor(int n, int m) {
    const int maxN = 1000005;
    int a[maxN] = {0}, b[maxN] = {0};

    int index1 = 0, index2 = 0;

    create(a, index1, n);
    create(b, index2, m);

    long long sum = 0;

    for (int i = 0; i < index1; ++i) {
        for (int j = 0; j < index2; ++j) {
            if (a[i] == b[j]) {
                sum += a[i];
                break;
            }
        }
    }

    return sum ? sum : -1;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << sum_of_divisor(n, m);
    // cout << s(n, m);
    // cout << product();
    return 0;
}