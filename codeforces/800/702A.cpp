#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n <= 0) {
        cout << 0 << "\n";
        return 0;
    }

    long long prev;
    cin >> prev;

    int best = 1;
    int curr = 1;

    for (int i = 1; i < n; i++) {
        long long x;
        cin >> x;
        if (x > prev) {
            curr++;
        } else {
            curr = 1;
        }
        if (curr > best) best = curr;
        prev = x;
    }

    cout << best << "\n";
    return 0;
}
