#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;
const int MAX_LEN = 1e6 + 5;
long long p2[MAX_LEN];

void precompute() {
    p2[0] = 1;
    for (int i = 1; i < MAX_LEN; i++) {
        p2[i] = (p2[i - 1] * 2) % MOD;
    }
}

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    
    bool all_01 = true;
    for (char c : s) {
        if (c != '0' && c != '1') {
            all_01 = false;
            break;
        }
    } 
    
    long long ans = 0;
    
    if (!all_01) {
        ans = 1;
        for (int i = 0; i < n; i++) {
            int digit = s[i] - '0';
            if (digit % 2 != 0) {
                s[i] = '1';
            } else {
                s[i] = '0';
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        int idx_from_right = n - 1 - i;
        if (s[i] == '1') {
            if (idx_from_right == 0) {
                ans = (ans + 1) % MOD;
            } else {
                long long add = (3LL * p2[idx_from_right - 1]) % MOD;
                ans = (ans + add) % MOD;
            }
        }
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    precompute();
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}