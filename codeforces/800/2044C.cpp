#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long x = min(a, m);
        long long y = min(b, m);

        long long rem = (m - x) + (m - y);

        long long z = min(c, rem);

        cout << x + y + z << '\n';
    }
    return 0;
}
