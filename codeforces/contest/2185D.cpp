#include <iostream>
#include <vector>

using namespace std;

struct Op {
    int b;
    long long c;
};

bool has_crash(int start_op, int n, int m, long long h, const vector<long long>& a, const vector<Op>& ops) {
    vector<long long> current_a = a;
    for (int i = start_op; i < m; ++i) {
        int idx = ops[i].b;
        current_a[idx] += ops[i].c;
        if (current_a[idx] > h) return true;
    }
    return false;
}

void solve() {
    int n, m;
    long long h;
    cin >> n >> m >> h;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];

    vector<Op> ops(m);
    for (int i = 0; i < m; ++i) cin >> ops[i].b >> ops[i].c;

    int last_crash_idx = -1;
    int low = 0, high = m - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (has_crash(mid + 1, n, m, h, a, ops)) {
            low = mid + 1;
        } else {
            last_crash_idx = mid;
            high = mid - 1;
        }
    }
    
    int final_start = 0;
    if (has_crash(0, n, m, h, a, ops)) {
        int L = 0, R = m - 1, best_k = -1;
        while(L <= R) {
            int mid = L + (R - L) / 2;
            if (!has_crash(mid + 1, n, m, h, a, ops)) {
                best_k = mid; 
                R = mid - 1;
            } else {
                L = mid + 1;
            }
        }
        final_start = best_k + 1;
    } else {
        final_start = 0;
    }

    vector<long long> res = a;
    for (int i = final_start; i < m; ++i) {
        res[ops[i].b] += ops[i].c;
    }

    for (int i = 1; i <= n; ++i) {
        cout << res[i] << (i == n ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}