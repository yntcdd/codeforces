#include <iostream>
using namespace std;

int main() {

    int k;
    cin >> k;

    int twos = k / 2;

    if (k % 2 == 0) {
        twos = k / 2;
        cout << twos << endl;
        for (int i = 0; i < twos; i++) {
            cout << 2 << " ";
        }
    } else {
        twos--;
        cout << twos + 1 << endl;
        for (int i = 0; i < twos + 1; i++) {
            if (i == twos) {
                cout << 3;
            } else {
                cout << 2 << " ";
            }
        }
    }
    return 0;
}