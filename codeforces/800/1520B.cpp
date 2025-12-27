#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long ans = 0;

        int len = to_string(n).size();

        ans += (len - 1) * 9;

        for (int d = 1; d <= 9; d++) {
            long long ordinary = 0;
            for (int i = 0; i < len; i++) {
                ordinary = ordinary * 10 + d;
            }
            if (ordinary <= n)
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}
