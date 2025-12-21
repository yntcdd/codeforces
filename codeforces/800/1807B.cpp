#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int odds = 0;
        int evens = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) {
                evens += x;
            } else {
                odds += x;
            }
        }

        if (evens > odds) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}