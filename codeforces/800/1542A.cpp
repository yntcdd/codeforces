#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[2 * n] = {};

        int evens = 0;
        int odds = 0;

        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];

            if (a[i] % 2 == 0) {
                evens++;
            } else {
                odds++;
            }
        }

        if (evens == odds) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}