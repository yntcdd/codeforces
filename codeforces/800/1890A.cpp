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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        unordered_map<int,int> freq;
        for (auto &x : a) {
            freq[x]++;
        }

        if (freq.size() == 1) {
            cout << "Yes\n";
        }
        else if (freq.size() == 2) {
            auto it = freq.begin();
            int c1 = it->second;
            it++;
            int c2 = it->second;
            if (abs(c1 - c2) <= 1) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
        else {
            cout << "No\n";
        }
    }
    return 0;
}
