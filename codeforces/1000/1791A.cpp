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
        string s;
        cin >> s;

        vector<int> prefixDistinct(n), suffixDistinct(n);

        {
            vector<bool> seen(26, false);
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (!seen[s[i] - 'a']) {
                    seen[s[i] - 'a'] = true;
                    cnt++;
                }
                prefixDistinct[i] = cnt;
            }
        }

        {
            vector<bool> seen(26, false);
            int cnt = 0;
            for (int i = n - 1; i >= 0; i--) {
                if (!seen[s[i] - 'a']) {
                    seen[s[i] - 'a'] = true;
                    cnt++;
                }
                suffixDistinct[i] = cnt;
            }
        }

        int ans = 0;
        for (int i = 1; i < n; i++) {
            ans = max(ans, prefixDistinct[i - 1] + suffixDistinct[i]);
        }

        cout << ans << "\n";
    }
    return 0;
}
