#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << n << (isPrime(n) ? " is prime.\n" : " is not prime.\n");
    return 0;
}
