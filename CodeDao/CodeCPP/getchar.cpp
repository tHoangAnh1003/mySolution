#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_LENGTH = 9;

int main() {
    int soLanNhap = 0;
    bool flag = false;

    while (true) {

        string password = "";
        char ch;


        while (password.length() < MAX_LENGTH) {
            ch = getch();

            if (ch == 13) {
                break;
            }

            password += ch;
            cout << "X";
        }

        // cout << '\n';
        // cout << password << endl;

        if (password == "HaNoi2000") {
            flag = true;
            cout << "\nDung\n";
            break;
        } else {
            cout << "\nSai\n";
        }

        soLanNhap += 1;

        if (soLanNhap == 3) {
            cout << "Ban Da Nhap sai 3 lan\n";
            break;
        }
    }

    if (flag) {
        // Tiep tuc chuong trinh
    }

    return 0;
}
