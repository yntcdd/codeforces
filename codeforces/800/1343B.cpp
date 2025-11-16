#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;

        cin >> n;
        int sumodds = 0;
        int sumevens = 0;
        if (n / 2 % 2 == 0) {
            cout << "YES" << endl;
            for (int j = 1; j <= n / 2; j++) {
                cout << j * 2 << ' ';
                sumevens += j * 2;
            }
            for (int j = 0; j < n / 2 - 1; j++) {
                cout << j * 2 + 1<< ' ';
                sumodds += j * 2 + 1;
            }
            cout << sumevens - sumodds << endl;
        } else {
            cout  << "NO" << endl;
        }
    }

    return 0;
}