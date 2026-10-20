#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive.\n";
        return 0;
    }

    int a[1000];
    if (n > 1000) {
        cout << "Please enter at most 1000 elements.\n";
        return 0;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) cin >> a[i];

    int target;
    cout << "Enter target: ";
    cin >> target;

    for (int i = 0; i < n; ++i) {
        if (a[i] == target) {
            cout << "Found at index " << i << ".\n";
            return 0;
        }
    }

    cout << "Target not found.\n";
    return 0;
}
