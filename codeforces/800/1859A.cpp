#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int a[n] = {};

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int x[n] = {};
        for (int i = 0; i < n; i++) {
            x[i] = a[i];
        }

        sort(x, x + n);
        int biggest = x[n - 1];

        int bigs = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == biggest) {
                bigs++;
            }
        }
        if (bigs == n) {
            cout << -1 << "\n";
        } else {
            cout << n - bigs << " " << bigs << endl;
            for (int i = 0; i < n; i++) {
                if (a[i] != biggest) {
                    cout << a[i] << " ";
                }
            }

            cout << "\n";

            for (int i = 0; i < bigs; i++) {
                cout << biggest << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}