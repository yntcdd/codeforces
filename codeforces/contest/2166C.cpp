#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long cost = 0;
        long long mx = 0;
        for (int i = 0; i < n; i++) {
            cost += max(a[i], a[(i+1)%n]);
            mx = max(mx, a[i]);
        }

        cost -= mx;
        cout << cost << "\n";
    }

    return 0;
}
