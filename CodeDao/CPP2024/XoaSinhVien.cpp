#include <concepts>
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(char ten[MAXN]) {
    cin.getline(ten, MAXN);
}

void Nhap(SinhVien sv[MAXN], int &n) {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin.ignore();
        cin.getline(sv[i].MASV, 10);
        cin.getline(sv[i].HoTen, MAXN);
        cin.getline(sv[i].NgaySinh, 12);
        cin >> sv[i].GioiTinh;
        cin >> sv[i].DiemToan >> sv[i].DiemLy >> sv[i].DiemHoa;
        sv[i].DTB = (sv[i].DiemHoa + sv[i].DiemLy + sv[i].DiemToan) / 3;
    }
}

bool soSanh(char hoTen[MAXN], char ho[MAXN]) {
    int n = strlen(hoTen);
    int m = strlen(ho);

    if (n != m)
        return false;

    for (int i = 0; i < n; ++i) {
        if (hoTen[i] != ho[i])
            return false;
    }

    return true;
}

void Xuat(SinhVien A[MAXN], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i].MASV << "\t"
             << A[i].HoTen << "\t"
             << A[i].NgaySinh << "\t"
             << A[i].GioiTinh << "\t";
        cout.precision(3);
        cout << A[i].DiemToan << "\t"
             << A[i].DiemLy << "\t"
             << A[i].DiemHoa << "\t"
             << A[i].DTB << endl;
    }
}

void Gan(SinhVien &sv1, SinhVien &sv2) {
    for (int i = 0; i < 8; ++i) {
        sv1.MASV[i] = sv2.MASV[i];
    }

    int doDaiTen = strlen(sv1.HoTen);
    int doDaiTen2 = strlen(sv2.HoTen);
    int maxDoDai = max(doDaiTen, doDaiTen2);
    for (int i = 0; i < maxDoDai; ++i) {
        sv1.HoTen[i] = sv2.HoTen[i];
    }

    for (int i = 0; i < 10; ++i) {
        sv1.NgaySinh[i] = sv2.NgaySinh[i];
    }

    sv1.GioiTinh = sv2.GioiTinh;
    sv1.DiemToan = sv2.DiemToan;
    sv1.DiemHoa = sv2.DiemHoa;
    sv1.DiemLy = sv2.DiemLy;
    sv1.DTB = sv2.DTB;
}

void XoaTheoHoTen(SinhVien sv[MAXN], int &n, char ho[MAXN]) {
    SinhVien temp[MAXN];
    int index = 0;

    for (int i = 0; i < n; ++i) {
        if (!soSanh(sv[i].HoTen, ho)) {
            Gan(temp[index++], sv[i]);
        }
    }

    for (int i = 0; i < index; ++i) {
        Gan(sv[i], temp[i]);
    }

    n = index;
}

int main() {
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}
