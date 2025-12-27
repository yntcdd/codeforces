#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        int d = x % 10;  // digit that repeats (because boring apt is same digit)
        int len = 0;
        int temp = x;
        while (temp > 0) {
            temp /= 10;
            len++;
        }

        int result = (d - 1) * 10;
        // sum of first len natural numbers = len * (len + 1) / 2
        result += (len * (len + 1)) / 2;

        cout << result << "\n";
    }

    return 0;
}
