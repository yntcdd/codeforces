#include <iostream>

using namespace std;

int main() {

    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    if (a >= c && a >= b) {
        if (c >= b) {
            cout << a - b;
        } else {
            cout << a - c;
        }
    }
    if (b >= a && b >= c) {
        if (c >= a) {
            cout << b - a;
        } else {
            cout << b - c;
        }
    }
    if (c >= a && c >= b) {
        if (b >= a) {
            cout << c - a;
        } else {
            cout << c - b;
        }
    }

    return 0;
}