#include <bits/stdc++.h>
using namespace std;



int main() {
    ifstream in("filein.txt");
    ofstream out("fileout.txt");
    if (in.is_open()) {
        double sum = 0;
        double n;
        int count = 0;
        while (in >> n) {
            if (n == 0) {
                double hour = 1.0 * count / 4;
                if (sum != 0 && hour != 0) {
                    sum = (sum * 24 * 3600) / (hour * 54 * 1e6);
                    out << sum << '\n';
                }
                sum = 0;
                count = 0;
            } else {
                sum += n;
                count += 1;
            }
        }
    }
    return 0;
}