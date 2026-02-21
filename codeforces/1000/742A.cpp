#include <iostream>
#include <string>
using namespace std;

int main() {

    string n;
    cin >> n;

    // n == "0"
    if (n == "0") {
        cout << 1 << "\n";
        return 0;
    }

    int mod4 = 0;
    for (char c : n) {
        mod4 = (mod4 * 10 + (c - '0')) % 4;
    }

    if (mod4 == 1) cout << 8 << "\n";
    else if (mod4 == 2) cout << 4 << "\n";
    else if (mod4 == 3) cout << 2 << "\n";
    else cout << 6 << "\n";   // mod4 == 0

    return 0;
}
