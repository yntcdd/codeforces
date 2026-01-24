#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int biggest = 0;
        int a[n] = {};
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > biggest) {
                biggest = a[i];
            }
        }
        int first = a[0];
        a[0] = biggest;
        a[n - 1] = first;

        cout << biggest * n << endl;
    }

    return 0;
}