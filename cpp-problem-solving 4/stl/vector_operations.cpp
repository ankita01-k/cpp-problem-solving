#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0 || n > 10000) {
        cout << "Enter a size between 1 and 10000.\n";
        return 0;
    }

    vector<int> values(n);
    cout << "Enter the numbers: ";
    for (int &x : values) cin >> x;

    int largest = *max_element(values.begin(), values.end());
    sort(values.begin(), values.end());

    cout << "Largest element: " << largest << '\n';
    cout << "Sorted values: ";
    for (int x : values) cout << x << ' ';
    cout << '\n';
    return 0;
}
