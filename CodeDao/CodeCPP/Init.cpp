#include <iostream>
#include <map>
using namespace std;

/// link: https://hackmd.io/@hda/SkejOs2gn
/// link: https://wiki.vnoi.info/algo/basic/two-pointers

/// Baitap: http://oj.28tech.com.vn/problem/array_basic17
/// Baitap: https://lqdoj.edu.vn/problem/findpair
/// Baitap: https://lqdoj.edu.vn/problem/cntpair02
/// Baitap: https://oj.vnoi.info/problem/nksgame
/// Baitap: https://oj.vnoi.info/problem/ndccardS

bool dx(int a[], int n) {
    int left = 0;
    int right = 0;

    while (left <= right) {
        if (a[left] != a[right]) {
            return false;
        }
        left ++;
        right --;
    }

    return true;
}

bool kt(int a[], int n, int k) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = a[left] + a[right];
        if (sum == k) {
            cout << left << ' ' << right << '\n';
            return true;
        }
        else if (sum < k)
            left ++;
        else
            right --;
    }

    return false;
}

void mer() {
    int a[] = {1, 3, 6, 8, 10};
    int b[] = {2, 6, 7, 12, 14, 15};
    int n = 5;
    int m = 6;

    int c[12];
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
            k++;
        } else {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }

    for (int p = 0; p < k; ++p)
        cout << c[p] << ' ';
}

/// cua so truot
void dayCon() {
    int a[] = {0, 9, 3, 8, 2, 4, 0, 9};
    int n = 8;
    int k = 4;

    int sum = 0;

    for (int i = 0; i < k; ++i)
        sum += a[i];

    int res = 0;

    int left = 0;
    int right = k - 1;

    while (right < n - 1) {
        right ++;
        sum += (a[right] - a[left]);
        left ++;

        res = max(res, sum);
    }

    cout << res;
}

/// tong khong vuot S
void dayCon2() {
    int a[] = {2, 6, 5, 3, 6, 8, 9};
    int n = 7;
    int s = 20;

    int left = 0;
    int right = 0;
    int sum = 0;
    int ans = 0;

    for (right = 0; right < n; ++right) {
        sum += a[right];
        while (sum > s) {
            sum -= a[left];
            left ++;
        }
        if (ans < sum) {
            ans = sum;
            cout << a[right] << ' ' << a[left] << '\n';
        }
    }

    cout << ans;
}

int main() {

    return 0;
}
