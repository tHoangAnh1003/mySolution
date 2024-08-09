#include <iostream>
using namespace std;

class Fraction {
    int a, b;
public:
    Fraction() {
        a = 1;
        b = 1;
    }
    Fraction(int _a, int _b) {
        b = _b;
        a = _a;
        simplify();
    }

    friend ostream& operator<<(ostream& os, const Fraction& f) {
        if (f.b == 0) {
            os << "invalid\n";
        } else {
            os << f.a << '/' << f.b << '\n';
        }
        return os;
    }

    Fraction operator+(const Fraction& f) const {
        Fraction res;
        res.a = this->a * f.b + this->b * f.a;
        res.b = this->b * f.b;
        res.simplify();
        return res;
    }

    Fraction operator-(const Fraction& f) const {
        Fraction res;
        res.a = this->a * f.b - this->b * f.a;
        res.b = this->b * f.b;
        res.simplify();
        return res;
    }

    Fraction operator*(const Fraction& f) const {
        Fraction res;
        res.a = this->a * f.a;
        res.b = this->b * f.b;
        res.simplify();
        return res;
    }

    Fraction operator/(const Fraction& f) const {
        Fraction res;
        res.a = this->a * f.b;
        res.b = this->b * f.a;
        res.simplify();
        return res;
    }

private:
    int gcd(int _a, int _b) const {
        if (_b == 0) return _a;
        return gcd(_b, _a % _b);
    }

    void simplify() {
        if (b < 0) {
            a = -a;
            b = -b;
        }
        int g = gcd(abs(a), abs(b));
        a /= g;
        b /= g;
    }

public:
    bool operator>(const Fraction& f) const {
        return (this->a * f.b) > (f.a * this->b);
    }

    bool operator<(const Fraction& f) const {
        return (this->a * f.b) < (f.a * this->b);
    }
};