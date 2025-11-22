#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int cntEvenWrong = 0;
        int cntOddWrong = 0;

        for (int i = 0; i < n; i++) {
            if ((a[i] % 2) != (i % 2)) {
                // parity mismatch
                if (i % 2 == 0) {
                    cntEvenWrong++;
                } else {
                    cntOddWrong++;
                }
            }
        }

        if (cntEvenWrong != cntOddWrong) {
            cout << -1 << "\n";
        } else {
            cout << cntEvenWrong << "\n";
        }
    }

    return 0;
}
