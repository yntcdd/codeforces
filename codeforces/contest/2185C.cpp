#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_mex = 0;

    for (int i = 0; i < n; ++i) {
        
        vector<bool> present(n + 2, false);
        
        for (int j = 0; j < n; ++j) {
            long long val = a[j] - a[i];
            
            if (val >= 0 && val <= n) {
                present[(int)val] = true;
            }
        }

        int current_mex = 0;
        while (present[current_mex]) {
            current_mex++;
        }
        
        max_mex = max(max_mex, current_mex);
    }

    cout << max_mex << endl;
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