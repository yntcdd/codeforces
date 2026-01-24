#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        long long x, y;
        cin >> x >> y;

        long long a, b;
        cin >> a >> b;

        if (x == 0 && y == 0) {
            cout << 0 << "\n";
        } else if (a * 2 < b) {
            cout << a * (x + y) << "\n";
        } else {
            cout << b * min(x, y) + a * abs(x - y) << "\n";
        }
    }

    return 0;
}