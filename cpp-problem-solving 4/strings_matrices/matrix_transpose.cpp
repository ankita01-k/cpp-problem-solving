#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns (maximum 10 each): ";
    cin >> rows >> cols;

    if (rows <= 0 || cols <= 0 || rows > 10 || cols > 10) {
        cout << "Dimensions must be between 1 and 10.\n";
        return 0;
    }

    int a[10][10];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> a[i][j];

    cout << "Transpose:\n";
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
