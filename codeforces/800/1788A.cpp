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
        vector<int> a(n);
        for (auto &x : a) {
            cin >> x;
        }

        int total2 = 0;
        for (int x : a) {
            if (x == 2) total2++;
        }

        if (total2 % 2 != 0) {
            cout << -1 << "\n";
            continue;
        }

        int half2 = total2 / 2;
        int cnt2 = 0;
        int answer = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] == 2) cnt2++;
            if (cnt2 == half2) {
                answer = i + 1; 
                break;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
