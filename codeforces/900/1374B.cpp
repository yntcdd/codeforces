#include <iostream>

using namespace std;

int main() {

    int t; 
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int moves = 0;
        if (n == 1) {
            cout << 0 << endl;
        } else if (n % 3 != 0) {
            cout << -1 << endl; 
            continue;
        } else {
            for (int i = 0; i < 50; i++) {
                moves++;
                if (n % 6 == 0) {
                    n /= 6;
                } else {
                    n = n * 2;
                }
                if (n == 1) {
                    cout << moves << endl;
                    break;
                }
            }
            if (n != 1) {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
// 1
// 3
// 6
// 9
// 18
// 27
// 36
// 54
// 81
// 108