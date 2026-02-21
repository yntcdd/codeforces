#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        if (2*b > c && (2*b - c) % a == 0) ok = true;
        if ((a + c) % (2*b) == 0) ok = true;
        if (2*b > a && (2*b - a) % c == 0) ok = true;

        cout << (ok ? "YES\n" : "NO\n");
    }
}
