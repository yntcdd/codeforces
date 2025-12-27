#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        
        bool non = false;
        int lastnumber = 0;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;

            if (x < lastnumber) {
                non = true;
            } else {
                lastnumber = x;
            }
        }
        if (non) {
            if (k > 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}