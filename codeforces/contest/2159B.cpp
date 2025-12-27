#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;

        vector<long long> b(n + 1, 0);
        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<int> a(n + 1, 0);
        int next_new_value = 1;

        for (int i = 1; i <= n; i++) {
            long long diff = b[i] - b[i - 1];
            if (diff == i) {
                a[i] = next_new_value++;
            } else {
                a[i] = a[i - diff];
            }
        }

        for (int i = 1; i <= n; i++) {
            if (i > 1) cout << ' ';
            cout << a[i];
        }
        cout << '\n';
    }

    return 0;
}
