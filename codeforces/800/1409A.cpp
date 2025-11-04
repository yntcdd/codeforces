#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long diff = llabs(a - b);
        // Each move you can change a by any k from 1 to 10 (add or subtract),
        // so in effect you can move up to 10 each move toward b.
        long long moves = diff / 10;
        if (diff % 10 != 0) {
            moves += 1;
        }
        cout << moves << "\n";
    }
    return 0;
}
