#include <iostream>
using namespace std;

// Binary search requires the input array to be sorted in ascending order.
int binarySearch(const int a[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == target) return mid;
        if (a[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter size of sorted array: ";
    cin >> n;

    if (n <= 0 || n > 1000) {
        cout << "Size must be between 1 and 1000.\n";
        return 0;
    }

    int a[1000];
    cout << "Enter " << n << " integers in ascending order: ";
    for (int i = 0; i < n; ++i) cin >> a[i];

    int target;
    cout << "Enter target: ";
    cin >> target;

    int index = binarySearch(a, n, target);
    if (index == -1) cout << "Target not found.\n";
    else cout << "Found at index " << index << ".\n";

    return 0;
}
