#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

#define MAXN 100

struct DATHUC {
    int soLuong;     
    double heSo[MAXN];       
    double soMu[MAXN];       
};

DATHUC* Nhap() {
    DATHUC* dt = new DATHUC;
    
    cin >> dt->soLuong;
    
    for(int i = 0; i < dt->soLuong; i++) {
        cin >> dt->heSo[i] >> dt->soMu[i];
    }
    
    return dt;
}


void Xuat(DATHUC dt) {
    bool flag = true;
    for (int i = 0; i < dt.soLuong; ++i) {
        if (dt.soMu[i] != 0) {
            if (dt.heSo[i] == 1) {
                if (i > 0) {
                    if (!flag) {
                        cout << "+";
                    }
                }
                cout << "x";
                if (dt.soMu[i] != 1) {
                    cout << "^" << dt.soMu[i];
                }
            } else if (dt.heSo[i] == -1) {
                cout << "-x";
                if (dt.soMu[i] != 1) {
                    cout << "^" << dt.soMu[i];
                }
            } else if (dt.heSo[i] != 0) {
                if (dt.heSo[i] > 0) {
                    if (i > 0) {
                        if (!flag)
                            cout << "+";
                    }
                }
                cout << dt.heSo[i] << "x";
                if (dt.soMu[i] != 1) {
                    cout << "^" << dt.soMu[i];
                }
            }
        } else {
            if (dt.heSo[i] > 0) {
                if (i > 0)
                    cout << "+";
                cout << dt.heSo[i];
            } else {
                cout << dt.heSo[i];
            }
        }

        if (dt.heSo[i] != 0)
            flag = false;
    }
    if (flag)
        cout << 0;
}

double TinhDaThuc(DATHUC B, double x) {
    double ans = 0;
    for (int i = 0; i < B.soLuong; ++i) {
        ans += (B.heSo[i] * pow(x, B.soMu[i]));
    }
    return ans;
}
int main() {
    DATHUC *B; B = Nhap();
    cout << "Da thuc vua nhap la: "; Xuat(*B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);

    return 0;
}