#include <iostream>

using namespace std;

int main() {

    int a;
    int b;
    
    cin >> a >> b;

    int years = 0;
    for (int i = 0; i < 20; i++) {
        a *= 3;
        b *= 2;
        if (a > b) {
            years = i + 1;
            break;
        }
    }

    cout << years;

    return 0;
}
