#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long fullBlocks = k / (n - 1);
        long long remainder = k % (n - 1);

        long long answer;
        if (remainder == 0) {
            // Exactly at the end of a block
            answer = fullBlocks * n - 1;
        } else {
            // In the next block
            answer = fullBlocks * n + remainder;
        }

        cout << answer << "\n";
    }
    return 0;
}
