#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int get_global_mex(const vector<int>& a) {
    set<int> s(a.begin(), a.end());
    int mex = 0;
    while (s.count(mex)) mex++;
    return mex;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int count0 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 0) count0++;
    }

    int m = get_global_mex(a);

    if (m == 0) {
        cout << "NO" << endl;
        return;
    }

    if (m == 1) {
        if (count0 > 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        return;
    }

    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}