#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a single word: ";
    cin >> s;

    int left = 0, right = static_cast<int>(s.size()) - 1;
    bool palindrome = true;

    while (left < right) {
        if (s[left] != s[right]) {
            palindrome = false;
            break;
        }
        ++left;
        --right;
    }

    cout << (palindrome ? "Palindrome\n" : "Not a palindrome\n");
    return 0;
}
