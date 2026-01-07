#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        // Count characters
        vector<int> cnts(26, 0), cntt(26, 0);
        for (char c : s) cnts[c - 'a']++;
        for (char c : t) cntt[c - 'a']++;

        // Compare
        if (cnts == cntt)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
