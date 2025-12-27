#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int a = 0;
        int b = 0;
        int c = 0;

        for (int i = 0; i < 9; i++) {
            char x;
            cin >> x;

            if (x == 'A') {
                a++;
            } else if (x == 'B') {
                b++;
            } else {
                c++;
            }
        }

        if (a == 2) {
            cout << 'A' << endl;
        } else if (b == 2) {
            cout << 'B' << endl;
        } else {
            cout << 'C' << endl;
        }
    }

    return 0;
}