#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s = to_string(n);
        int digits = s.length();

        int power = 1;
        for (int i = 1; i < digits; i++) power *= 10;

        int result = 9 * (digits - 1) + n / power;

        cout << result << "\n";
    }

    return 0;
}