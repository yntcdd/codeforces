#include <iostream>

using namespace std;

int main() {

    long long t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        long long a, b, n;

        cin >> a >> b >> n;

        if (b >= a) {
            cout << 1 << endl;
        } else {
            if (b * n > a) {
                cout << 2 << endl;
            }  else {
                cout << 1 << endl;
            }
        }

    }

    return 0;
}