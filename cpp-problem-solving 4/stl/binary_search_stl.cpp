#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> values = {3, 8, 12, 17, 25, 31};
    int target;

    cout << "Sorted values: ";
    for (int x : values) cout << x << ' ';
    cout << "\nEnter target: ";
    cin >> target;

    bool found = binary_search(values.begin(), values.end(), target);
    cout << (found ? "Found\n" : "Not found\n");
    return 0;
}
