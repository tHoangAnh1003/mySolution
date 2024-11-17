#include <iostream>
using namespace std;

#define maxN int(1000005)

int arr[maxN];


int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i + 1;
        }
    }

    return -1;
}


int main() {
    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int test; cin >> test;
    for (int i = 0; i < test; ++i) {
        int target; cin >> target;
        cout << linearSearch(arr, n, target) << '\n';
    }
    
    return 0;
}
