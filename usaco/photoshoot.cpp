#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    int Q;
    cin >> Q;

    vector<vector<long long>> grid(N, vector<long long>(N, 0));
    vector<vector<long long>> sum(N - K + 1, vector<long long>(N - K + 1, 0));

    long long maxSum = 0;

    while (Q--) {
        int r, c;
        long long v;
        cin >> r >> c >> v;
        r--; c--;

        long long delta = v - grid[r][c];
        grid[r][c] = v;

        int r1 = max(0, r - K + 1), r2 = min(r, N - K);
        int c1 = max(0, c - K + 1), c2 = min(c, N - K);

        for (int i = r1; i <= r2; i++) {
            for (int j = c1; j <= c2; j++) {
                sum[i][j] += delta;
                maxSum = max(maxSum, sum[i][j]);
            }
        }

        cout << maxSum << "\n";
    }

    return 0;
}
