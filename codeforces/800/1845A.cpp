#include <iostream>

using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (k == 1 && x == 1 || n == 1 && x == 1) {
            cout << "NO" << endl;
            continue;
        }

        if (x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++) {
                cout << "1 ";
            }
            cout << endl;
        } else {
            if (n % 2 == 0) {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2; i++) {
                    cout << "2 ";
                }
                cout << endl;
            } else {
                if (k < 3) {
                    cout << "NO" << endl;
                    continue;
                }

                cout << "YES" << endl;
                int m = n - 3;
                cout << m / 2 + 1 << endl;
                cout << "3 ";
                for (int i = 0; i < m / 2; i++) {
                    cout << "2 ";
                }
                cout << endl;
            }
        }
    }    

    return 0;
}