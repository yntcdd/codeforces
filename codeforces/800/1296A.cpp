#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int odds = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a % 2 == 1) {
                odds++;
            }
        }

        if (odds % 2 == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}