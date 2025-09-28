#include <iostream>

using namespace std;

int main() {

    double n;

    cin >> n;

    double total = 0;
    for (double i = 0; i < n; i++) {
        double drink;
        cin >> drink;
        total += drink;
    }

    cout << total / n;

    return 0;
}