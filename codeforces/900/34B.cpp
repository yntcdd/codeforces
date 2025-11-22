#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    // Sort TV prices in ascending order
    sort(prices.begin(), prices.end());

    int earned = 0;
    // Take at most m TV sets with negative price
    for (int i = 0; i < m; i++) {
        if (prices[i] < 0) {
            earned += prices[i];
        } else {
            break; // as soon as we reach a non-negative price, stop
        }
    }

    // Since earned is negative or zero, make it positive by multiplying by -1
    cout << -earned << "\n";

    return 0;
}
