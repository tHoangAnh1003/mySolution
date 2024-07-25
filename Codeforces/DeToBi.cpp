#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;

string changeToBinary(long n) {
    string s = "";

    for (int i = n; i > 0; i = (i >> 1)) {
        s += to_string(i & 1);
    }

    reverse(s.begin(), s.end());

    return s;
}

void changeToBinary2(long n) {
    if (n > 0) {
        changeToBinary2(n >> 1);
        cout << (n & 1);
    }
}


int main() {
    long n; cin >> n;

    bitset<32> b(n);

    cout << b << '\n';

    cout << changeToBinary(n) << '\n';
    
    changeToBinary2(n);

    return 0;
}