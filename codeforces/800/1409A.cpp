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
        long long moves = diff / 10;
        if (diff % 10 != 0) {
            moves += 1;
        }
        cout << moves << "\n";
    }
    return 0;
}
