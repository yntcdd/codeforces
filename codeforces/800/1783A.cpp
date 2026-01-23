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

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        // All elements equal -> impossible
        if (a[0] == a[n - 1]) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        // Largest first
        cout << a[n - 1] << " ";
        for (int i = 0; i < n - 1; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
