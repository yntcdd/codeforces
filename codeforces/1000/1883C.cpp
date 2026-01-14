#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        bool divisible = false;
        int num = 0;
        int count = 0;

        int x[n];

        int closest = 100000;

        for (int i = 0; i < n; i++) {
            cin >> x[i];

            if (k == 2 || k == 3 || k == 5) {   
                if (x[i] % k == 0) {
                    divisible = true;
                }
                int z = x[i] % k;
                int y = k - z;

                if (y < closest) {
                    closest = y;
                }
            }

            if (k == 4) {
                if (x[i] % k == 0) {
                    divisible = true;
                }
                if (x[i] % 2 == 0) {
                    count++;
                }
                int z = x[i] % k;
                int y = k - z;

                if (y < closest) {
                    closest = y;
                }
            }

        }

        if (k == 4) {
            if (divisible) {
                cout << 0 << endl;
            } else {
                if (n > 1) {
                    if (count >= 2) {
                        cout << 0 << endl;
                    } else {
                        if (closest < 2 - count) {
                            cout << closest << endl;
                        } else {
                            cout << 2 - count << endl;
                        }
                    }
                } else {
                    int z = x[0] % 4;
                    int y = 4 - z;
                    cout << y;
                }
            }
        } else {
            if (divisible) {
                cout << 0 << endl;
            } else {
                cout << closest << endl;
            }
        }

        
    }

    return 0; 
}