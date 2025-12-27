#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int small;
        int large;
        if (a > b) {
            small = b;
            large = a;
        } else {
            large = b;
            small = a;
        }

        if (large >= small * 2) {
            cout << large * large << endl;
        } else {
            cout << (small * 2) * (small * 2) << endl;
        }
    }

    return 0;
}