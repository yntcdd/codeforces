#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        string a, b, c;
        cin >> a >> b >> c;

        string three = "";

        three += a[0];
        three += b[0];
        three += c[0];
        cout << three << endl;
    }

    return 0;
}