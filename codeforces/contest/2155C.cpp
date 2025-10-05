#include <iostream>

using namespace std;

int main() {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;

        cin >> n;
        int capes[n] = {};
        for (int j = 0; j < n; j++) {
            cin >> capes[j];
        }
        for (int k = 0; k < n; k++) {
            if (capes[k] < capes[k + 1]) {
                cout << 0 << endl;
                break;
            } else {
                cout << 1 << endl;
                break;
            }
        }
    }

    return 0;
}