#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        string a, b;

        cin >> a >> b;

        char sigmaboy = a[0];

        a[0] = b[0];
        b[0] = sigmaboy;

        cout << a << " " << b << endl;
    }

    return 0;
}