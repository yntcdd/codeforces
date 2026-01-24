#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int first_one = -1, last_zero = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            first_one = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            last_zero = i;
            break;
        }
    }
    if (first_one == -1 || last_zero == -1 || first_one > last_zero) {
        cout << "Bob\n";
        return;
    }

    cout << "Alice\n";
    cout << last_zero - first_one + 1 << "\n";
    for (int i = first_one; i <= last_zero; i++) {
        cout << i + 1 << (i == last_zero ? '\n' : ' ');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
