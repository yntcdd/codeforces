#include <iostream>

using namespace std;

int main() {
    int steps;
    cin >> steps;

    if (steps % 5 == 0) {
        cout << steps / 5 << endl;
    } else {
        cout << steps / 5 + 1 << endl;
    }

    return 0;
}