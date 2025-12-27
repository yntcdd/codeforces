#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    // dp[i] = maximum number of pieces for length i (−1 means impossible)
    static int dp[4001];
    for(int i = 0; i <= n; i++) {
        dp[i] = -1000000;  // very negative (effectively impossible)
    }
    dp[0] = 0;

    for(int i = 1; i <= n; i++) {
        if (i - a >= 0) dp[i] = max(dp[i], dp[i - a] + 1);
        if (i - b >= 0) dp[i] = max(dp[i], dp[i - b] + 1);
        if (i - c >= 0) dp[i] = max(dp[i], dp[i - c] + 1);
    }

    cout << dp[n] << "\n";
    return 0;
}
