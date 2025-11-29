#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        int ones = 0;
        int twos = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            sum += x;
            if (x == 1) {
                ones++;
            } else {
                twos++;
            }
        }
        
        if (ones == 0) {
            if (n % 2 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            if (ones % 2 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}