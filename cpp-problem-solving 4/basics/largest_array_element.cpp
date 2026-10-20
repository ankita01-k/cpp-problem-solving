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

    int value, largest;
    cout << "Enter " << n << " integers: ";
    cin >> largest;

    for (int i = 1; i < n; ++i) {
        cin >> value;
        if (value > largest) largest = value;
    }

    cout << "Largest element: " << largest << '\n';
    return 0;
}
