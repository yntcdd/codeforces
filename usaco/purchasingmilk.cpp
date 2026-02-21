#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    int N, Q;
    if (!(cin >> N >> Q)) return;

    vector<long long> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i < N; ++i) {
        a[i] = min(a[i], 2 * a[i - 1]);
    }

    for (int q = 0; q < Q; ++q) {
        long long x;
        cin >> x;

        long long current_cost = 0;
        long long min_ans = -1;
        
        int start_bit = N - 1;
        
        if (start_bit > 62) {
            start_bit = 62; 
        }
        
        for (int i = start_bit; i >= 0; --i) {
            long long count = 0;
            
            if (i < 62) {
                long long capacity = (1LL << i);
                count = x / capacity;
                x %= capacity;
            } else {
                count = 0;
            }

            long long overshoot_cost = current_cost + (count + 1) * a[i];
            
            if (min_ans == -1 || overshoot_cost < min_ans) {
                min_ans = overshoot_cost;
            }

            current_cost += count * a[i];
        }

        if (min_ans == -1 || current_cost < min_ans) {
            min_ans = current_cost;
        }

        cout << min_ans << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}