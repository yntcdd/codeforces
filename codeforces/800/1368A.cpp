#include <iostream>

using namespace std;

int main () {

    int T;
    cin >> T;

    while (T--) {

        long long a, b, n;
        cin >> a >> b >> n;
        
        int found = 0;

        for (int i = 0; i < 44; i++) {
            if (a > n || b > n) {
                found = i;
                break;
            }

            if (a <= b) {
                a += b;
            } else {
                b += a;
            }
        }

        cout << found << endl;
    }

    return 0;
}