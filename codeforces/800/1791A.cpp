#include <iostream>

using namespace std;

int main() {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        char x;
        cin >> x;
        if (x == 'c' || x == 'o' || x == 'd' || x == 'e' || x == 'f' || x == 'r' || x == 's') {
            cout << "YES" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}