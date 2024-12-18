#include <iostream>
#include <algorithm>
using namespace std;
#define maxN 1005

/**
 * Hoàn thành code ở dòng 69. Không sửa những phần đã code sẵn
 * Cho một mảng A gồm N phần tử (-10^6 <= ai <= 10^6), hãy tạo ra mảng B là sắp xếp
 * của mảng A sao cho các phần tử chẵn đứng đầu mảng và tăng dần, các phần tử lẻ
 * đứng ở cuối mảng giảm dần
 * VD: A = {3, 5, 2, 8, 9}
 * => B = {2, 8, 9, 5, 3}
 */

void sapXep(int a[], int n, int B[]);

bool runTest(int testID, int input[], int n, int expected[]) {
    int B[maxN];
    sapXep(input, n, B);

    for (int i = 0; i < n; i++) {
        if (B[i] != expected[i]) {
            cout << "Test " << testID << " Failed\n";
            return false;
        }
    }
    cout << "Test " << testID << " Passed\n";
    return true;
}

int main() {
    // Test case 1
    int A1[] = {3, 5, 2, 8, 9};
    int expected1[] = {2, 8, 9, 5, 3};
    int n1 = 5;

    // Test case 2
    int A2[] = {10, 7, 3, 8, 6};
    int expected2[] = {6, 8, 10, 7, 3};
    int n2 = 5;

    // Test case 3
    int A3[] = {1, 1, 1, 1};
    int expected3[] = {1, 1, 1, 1};
    int n3 = 4;

    // Test case 4
    int A4[] = {4, 2, 6, 3, 5};
    int expected4[] = {2, 4, 6, 5, 3};
    int n4 = 5;

    // Chạy test
    bool allPassed = true;
    allPassed &= runTest(1, A1, n1, expected1);
    allPassed &= runTest(2, A2, n2, expected2);
    allPassed &= runTest(3, A3, n3, expected3);
    allPassed &= runTest(4, A4, n4, expected4);

    if (allPassed) {
        cout << "All tests Passed\n";
    } else {
        cout << "Some tests Failed\n";
    }

    return 0;
}

// Code ở đây
void sapXep(int a[], int n, int B[]) {

}
