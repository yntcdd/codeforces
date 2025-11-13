#include <iostream>

using namespace std;

int main() {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;

        cin >> n >> k;

        bool gotit = false;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x == k) {
                gotit = true;
            }
        }
        if (gotit) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}