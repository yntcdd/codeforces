#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    int nextPrime = n + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }

    if (nextPrime == m) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
