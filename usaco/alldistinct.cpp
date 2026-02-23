#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long N, K;
    if (!(cin >> N >> K)) return;
    
    vector<long long> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    if (K < 0) {
        K = -K;
        for (int i = 0; i < N; i++) {
            a[i] = -a[i];
        }
    }

    vector<pair<long long, long long>> v(N);
    for (int i = 0; i < N; i++) {
        long long remainder = (a[i] % K + K) % K; 
        v[i] = {remainder, a[i]};
    }

    sort(v.begin(), v.end());

    long long ans = 0;
    long long u = -2e18;
    long long curr_r = -1;

    for (int i = 0; i < N; i++) {
        long long r = v[i].first;
        long long val = v[i].second;
        
        if (r != curr_r) {
            curr_r = r;
            u = val;
        } else {
            u = max(val, u + K);
        }
        
        ans += (u - val) / K;
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }
    return 0;
}