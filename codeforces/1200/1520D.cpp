#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<long long, long long> freq;
        long long tally = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            long long key = x - i;

            tally += freq[key];
            freq[key]++;
        }

        cout << tally << "\n";
    }

    return 0;
}
