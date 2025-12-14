#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin() + 1, b.end());

    vector<long long> prefA(n + 1, 0), prefB(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        prefA[i] = prefA[i - 1] + a[i];
        prefB[i] = prefB[i - 1] + b[i];
    }

    int q;
    cin >> q;

    while (q--) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
            cout << prefA[r] - prefA[l - 1] << "\n";
        } else {
            cout << prefB[r] - prefB[l - 1] << "\n";
        }
    }

    return 0;
}
