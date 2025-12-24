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
        int N = 1 << n;

        vector<vector<int>> groups(n + 1);

        for (int x = 0; x < N; x++) {
            if (x == 0) {
                groups[0].push_back(x);
            } else {
                int msb = 31 - __builtin_clz(x);
                groups[msb].push_back(x);
            }
        }

        for (int i = n; i >= 0; i--) {
            sort(groups[i].begin(), groups[i].end());
            for (int x : groups[i]) {
                cout << x << " ";
            } 
        }
        cout << '\n';
    }
    return 0;
}
       