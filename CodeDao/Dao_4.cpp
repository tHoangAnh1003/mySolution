#include <iostream>
using namespace std;

struct fraction{
    int numerator, denominator;
    fraction (int _numerator, int _denominator){
        // them code cua ban o day
        numerator = _numerator;
        denominator = _denominator;
    }
};

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

fraction add(fraction a, fraction b){
    // them code cua ban o day
    int _numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    int _denominator = b.denominator * a.denominator;
    
    
    int neg = 1;
    if (_numerator * _denominator < 0)
        neg = -1;
    
    int _gcd = gcd(_denominator, _numerator);
    _denominator /= _gcd;
    _numerator /= _gcd;
    
    _denominator = abs(_denominator);
    _numerator = abs(_numerator) * neg;
    
    return fraction(_numerator, _denominator);
} 

int main() {
    // them code cua ban o day
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    fraction a1(a, b);
    fraction a2(c, d);
    
    fraction ans = add(a1, a2);
    
    if (ans.numerator == 0)
        cout << 0;
    else
        cout << ans.numerator << '/' << ans.denominator;
}
