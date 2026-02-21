#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool first;
        bool works = true;

        int a[n] = {};
        for (int i = 0; i < n ; i++) {
            cin >> a[i];

            if (i == 0) {
                if (a[i] % 2 == 0) {
                    first = true;
                } else {
                    first = false;
                }
            }

            if (first) {
                if (i % 2 == 0) {
                    if (a[i] % 2 != 0) {
                        works = false;
                    }
                } else {
                    if (a[i] % 2 == 0) {
                        works = false;
                    }
                }
            } else {
                if (i % 2 == 0) {
                    if (a[i] % 2 == 0) {
                        works = false;
                    }
                } else {
                    if (a[i] % 2 != 0) {
                        works = false;
                    }
                }
            }
        }

        if (works) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }    

    return 0;
}