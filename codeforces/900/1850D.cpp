#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());

        int longest = 1;
        int current = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] <= k) {
                current++;
            } else {
                current = 1;
            }
            longest = max(longest, current);
        }

        int removed = n - longest;
        cout << removed << "\n";
    }
}
