#include <iostream>
using namespace std;

void update(int *a, int *b) {
    int temp = *a + *b;
    int sub = abs(*a - *b);
    *a = temp;
    *b = sub;
    cout << *a << '\n' << *b;
}