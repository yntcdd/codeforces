#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> suffixDistinct(n + 1);
    unordered_set<int> seen;

    int distinctCount = 0;
    for (int i = n; i >= 1; i--) {
        if (seen.find(a[i]) == seen.end()) {
            seen.insert(a[i]);
            distinctCount++;
        }
        suffixDistinct[i] = distinctCount;
    }

    while (m--) {
        int l;
        cin >> l;
        cout << suffixDistinct[l] << "\n";
    }

    return 0;
}
