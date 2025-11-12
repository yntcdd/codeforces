#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[100001] = {}; // count of each number
    int maxVal = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums[x]++;
        if (x > maxVal) maxVal = x;
    }

    long long dp[100001] = {};
    dp[1] = nums[1];

    for (int i = 2; i <= maxVal; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + (long long)i * nums[i]);
    }

    cout << dp[maxVal];
    return 0;
}
