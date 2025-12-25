#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        cout << (1 << n) - 1 << " ";

        for (int i = 1; i <= n; i++) {

            int blockSize = 1 << (n - i);

            for (int j = 0; j < (1 << i); j += 2) {

                int nextBlockStart = (j + 1) * blockSize;
                int value = nextBlockStart - 1;

                cout << value << " ";
            }
        }

        cout << '\n';
    }

    return 0;
}
