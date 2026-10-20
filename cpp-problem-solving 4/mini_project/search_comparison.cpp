#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& a, int target, long long& comparisons) {
    for (int i = 0; i < static_cast<int>(a.size()); ++i) {
        ++comparisons;
        if (a[i] == target) return i;
    }
    return -1;
}

// This function assumes a is sorted in ascending order.
int binarySearch(const vector<int>& a, int target, long long& comparisons) {
    int left = 0, right = static_cast<int>(a.size()) - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        ++comparisons;

        if (a[mid] == target) return mid;
        if (a[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of sorted integers (1-100000): ";
    cin >> n;

    if (n <= 0 || n > 100000) {
        cout << "Invalid size.\n";
        return 0;
    }

    vector<int> a(n);
    cout << "Enter " << n << " integers in ascending order: ";
    for (int& x : a) cin >> x;

    int target;
    cout << "Enter target to search for: ";
    cin >> target;

    long long linearComparisons = 0, binaryComparisons = 0;
    int linearIndex = linearSearch(a, target, linearComparisons);
    int binaryIndex = binarySearch(a, target, binaryComparisons);

    cout << "\nLinear search index: " << linearIndex
         << " | comparisons: " << linearComparisons << '\n';
    cout << "Binary search index: " << binaryIndex
         << " | comparisons: " << binaryComparisons << '\n';

    cout << "\nLinear search: O(n) time\n";
    cout << "Binary search: O(log n) time on sorted input\n";
    return 0;
}
