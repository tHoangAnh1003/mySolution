#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char c[]) {
    int cnt = 0;
    while (c[cnt] != '\0') {
        cnt ++;
    }
    return cnt;
}

void Bai1() {
    char c[MAX];

    cin.getline(c, MAX);

    bool flag = true;

    for (int i = 0; i < myStrlen(c); ++i) {
        if (c[i] >= '0' && c[i] < '9') {
            flag = false;
            break;
        }
    }

    if (flag) {
        puts(c);
    } else {
        cout << "CHUOI KHONG HOP LE.";
    }
}



int main() {

    return 0;
}
