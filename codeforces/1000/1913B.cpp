#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        vector<int> cnt(2, 0);
        for (char c : s) {
            cnt[c - '0']++;
        }

        int n = s.size();
        for (int i = 0; i <= n; i++) {
            if (i == n || cnt[1 - (s[i] - '0')] == 0) {
                cout << n - i << "\n";
                break;
            }
            cnt[1 - (s[i] - '0')]--;
        }
    }
    return 0;
}
