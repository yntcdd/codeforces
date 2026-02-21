#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long A, B, cA, cB, fA;
        cin >> A >> B >> cA >> cB >> fA;

        long long init = (B / cB) * cA + A;
        if (init >= fA) {
            cout << 0 << endl;
        } else {
            long long nA0 = fA - 1 - init;
            long long y = cB - 1 - (B % cB);

            if (cA >= cB) {
                y += nA0;
            } else {
                y += (nA0 / cA) * cB + (nA0 % cA);
            }

            cout << y + 1 << endl;
        }
    }

    return 0;
}
