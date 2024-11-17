#include <iostream>
using namespace std;

#define maxN int(1000005)

int arr[maxN];


int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}



int main() {
    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        int target; cin >> target;
        cout << binarySearch(arr, n, target) << '\n';
    }
    return 0;
}
