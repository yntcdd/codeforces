#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        
        int a, b, c;
        cin >> a >> b >> c;

        int one = a - 1;
        int two = abs(c - b) + c - 1;
    
        if (one < two) {
            cout << 1 << endl;
        } else if (two < one) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }

    return 0;
}