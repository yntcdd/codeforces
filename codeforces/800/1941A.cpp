#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int tally = 0;

        int b[n] = {};
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int c[m] = {};
        for (int i = 0; i < m; i++) {
            cin >> c[i];
            for (int j = 0; j < n; j++) {
                if (c[i] + b[j] <= k) {
                    tally++;
                }
            }
        }

        cout << tally << endl;
    }

    return 0;
}