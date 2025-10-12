#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
 // 32-bit binary
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        bitset<32> b(x);
        cout << b << endl;
        bitset<32> rev(b);
        for (int i = 0; i < 32; i++) {
            rev[31 - i] = b[i]; // reverse the positions
        }

        cout << rev << endl;
    }

    return 0;
}
