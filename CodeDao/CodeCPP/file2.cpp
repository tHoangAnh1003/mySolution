#include <iostream>
using namespace std;

int ad(int x, int y = 0, int z = 0) {
    return x + y + z;
}

int main() {
    int a = 10;
    int b = 4 - (a = 13);
    cout << a << ' ' << b;

    return 0;
}
