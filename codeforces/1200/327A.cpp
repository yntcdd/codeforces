#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int totalOnes = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) totalOnes++;
    }

    int cur = 0, best = 0;
    for (int i = 0; i < n; i++) {
        int val = (a[i] == 0 ? 1 : -1);
        cur = max(val, cur + val);
        best = max(best, cur);
    }

    cout << totalOnes + best;
    return 0;
}
