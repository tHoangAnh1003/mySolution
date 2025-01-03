#include <iostream>
#include <math.h>
using namespace std;

struct phanso {
    int tuSo;
    int mauSo;
};

void Nhap(phanso &p) {
    /// TODO: Nhap phan so

}


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void toigian(phanso &p) {
    /// TODO: Toi gian phan so

}

void Xuat(phanso &p) {
    /// TODO: In ra phan so theo dang a / b

}

phanso tong(phanso a, phanso b) {
    /// TODO: Tong phan so

}

phanso hieu(phanso a, phanso b) {
    /// TODO: Hieu phan so

}

double giaTri(phanso a) {
    /// TODO: Tra ve a / b = ?
}

int main() {
    phanso p1, p2;
    Nhap(p1);
    Nhap(p2);
    phanso t = tong(p1, p2);
    phanso h = hieu(p1, p2);
    Xuat(tong);
    Xuat(hieu);

    cout << giaTri(p1) << ' ' << giaTri(p2) << ' ' << giaTri(t) << ' ' << giaTri(h) << '\n';
    return 0;
}
