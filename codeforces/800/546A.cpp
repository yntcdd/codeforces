#include <iostream>

using namespace std;


int main() {
    int first;
    int initial;
    int number;
    int money = 0;

    cin >> first;
    cin >> initial;
    cin >> number;

    for (int i = 0; i < number + 1; i++) {
        money += first * i;
    }

    if (money > initial) {
        cout << money - initial;
    } else {
        cout << 0;
    }

    return 0;
}