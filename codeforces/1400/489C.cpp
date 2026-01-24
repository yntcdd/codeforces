#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    int n, s;
    cin >> n >> s;

    if (s == 0) {
        if (n == 1) cout << "0 0\n";
        else cout << "-1 -1\n";
        return 0;
    }

    if (s > 9 * n) {
        cout << "-1 -1\n";
        return 0;
    }

    string mx = "";
    int remaining = s;
    for (int i = 0; i < n; i++) {
        int digit = min(9, remaining);
        mx += to_string(digit);
        remaining -= digit;
    }

    string mn = "";
    remaining = s;

    for (int i = 0; i < n; i++) {
        if (i == 0 && n > 1) {
            int digit = max(1, remaining - 9 * (n - 1));
            mn += to_string(digit);
            remaining -= digit;
        } else {
            int digit = max(0, remaining - 9 * (n - 1 - i));
            mn += to_string(digit);
            remaining -= digit;
        }
    }
    cout << mn << " " << mx << endl;
    return 0;
}
