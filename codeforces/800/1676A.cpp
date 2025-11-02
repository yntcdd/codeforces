#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string x;
        cin >> x;
        int a = x[0] - '0';
        int b = x[1] - '0';
        int c = x[2] - '0';
        int d = x[3] - '0';
        int e = x[4] - '0';
        int f = x[5] - '0';

        if (a+b+c == d+e+f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }


    return 0;
}