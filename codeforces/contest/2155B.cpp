#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;

        cin >> n >> k;

        if (n * n - k == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            int counter = 0;
            for (int row = 0; row < n; row++) {
                string layer;
                for (int column = 0; column < n; column++) {
                    counter++;
                    if (counter <= k) {
                        layer += 'U';
                    } else {
                        if (column == n - 1) {
                            if (row != n- 1) {
                                layer += 'D';
                            } else{
                                layer += 'L';
                            }
                        } else {
                            layer += 'R';
                        }
                    }
                }
                cout << layer << endl;
            }
        }
    }

    return 0;
}