#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        long long currentGold = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x >= k) {
                // Robin takes all gold if >= k
                currentGold += x;
            } else if (x == 0 && currentGold > 0) {
                // Give 1 gold if Robin has some
                currentGold--;
                ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
