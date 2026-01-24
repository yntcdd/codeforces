#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> pref(n + 1 , 0);
        for (int i = 0; i < n; i++) {
            pref[i+1] = pref[i] + a[i];
        }

        long long total = pref[n];

        while (q--) {
            
            long long l, r, k;
            cin >> l >> r >> k;

            long long sum = pref[r] - pref[l - 1];
            long long new_total = total - sum + (r - l + 1) * k;

            if (new_total % 2 == 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }

    }

    return 0;
}