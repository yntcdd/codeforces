#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int hours = a;
    int stubs = a;

    while (stubs >= b) {
        int newCandles = stubs / b;
        hours += newCandles;
        stubs = newCandles + (stubs % b);
    }

    cout << hours << endl;
    return 0;
}
