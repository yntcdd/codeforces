#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int time = sqrt(n);

        int one = -1;
        int two = -1;

        for (int i = 2; i <= time; i++) {
            if (n % i == 0) {
                n = n / i;
                one = i;
                break;
            }
        }
        if (one != -1) {
            time = sqrt(n);
            for (int i = one + 1; i <= time; i++) {
                if (n % i == 0) {
                    n = n / i;
                    two = i;
                    break;
                }
            }
            if (two != -1 && n != two) {
                cout << "YES" << endl;
                cout << one << " " << two << " " << n << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }    

    return 0;
}