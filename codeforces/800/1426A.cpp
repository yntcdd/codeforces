#include <iostream>

using namespace std;

int main() {

    int t;

    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        if (n == 1 || n == 2) {
            cout << 1 << "\n";
        } else {
            cout << 1 + (n-2 + x-1)/x << "\n";
        }
    }

    return 0;
}