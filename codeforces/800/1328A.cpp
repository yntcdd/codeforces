#include <iostream>

using namespace std;

int main() {

    int t;
    
    cin >> t;
    
    int ts[t] = {};

    for (int i = 0; i < t; i++) {
        int a,b;

        cin >> a >> b;

        if (a % b != 0) {
            ts[i] = (a / b + 1) * b - a;
        }
    }

    for (int i = 0; i < t; i++) {
        cout << ts[i] << endl;
    }

    return 0;
}