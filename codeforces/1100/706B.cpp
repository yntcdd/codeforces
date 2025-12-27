#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n];
    for (int i = 0; i < n; i++) cin >> x[i];
    sort(x, x + n); // sort x so we can binary search

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int m;
        cin >> m;
        // use upper_bound to find how many are <= m
        int count = upper_bound(x, x + n, m) - x;
        cout << count << endl;
    }

    return 0;
}
