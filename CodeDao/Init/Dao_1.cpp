#include <iostream>
#include <cmath>

using namespace std;

// Giai phuong trinh n * (n + 1) = 2 * x
// => n * n + n - 2x = 0
// => delta = 1 - 4 * 1 * (-2x) = 1 + 8x >= 0

bool kiemTraChinhPhuong(int n) {
    int s = sqrt(n);
    return (s * s == n);
}

bool kiemTraNghiemNguyen(double n) {
    return int(n) == n;
}

int main() {
    int n; cin >> n;
    int delta = 1 + 8 * n;
    
    if (!kiemTraChinhPhuong(delta)) {
        cout << "NO";
        return 0;
    }
    
    double nghiem1 = (-1 + sqrt(delta)) / 2;
    double nghiem2 = (-1 - sqrt(delta)) / 2;
    
    if ((nghiem1 > 0 || nghiem2 > 0) && 
        (kiemTraNghiemNguyen(nghiem1) || 
        kiemTraNghiemNguyen(nghiem2))) 
        cout << "YES";
    else 
        cout << "NO";
    
    return 0;
}