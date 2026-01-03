#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    long long n;
    cin >> n;

    long long b[n] = {};

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(b, b + n);

    long long largest = 0;
    long long smallest = 0;

    for (int i = 0; i < n; i++) {
        if (b[i] == b[0]) {
            smallest++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (b[i] == b[n - 1]) {
            largest++;
        }
    }

    if (b[n - 1] == b[0]) {
        cout << 0 << " " << n * (n - 1) / 2;
    } else {
        cout << b[n - 1] - b[0] << " " << largest * smallest;
    }

    return 0;
}