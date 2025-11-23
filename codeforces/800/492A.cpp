#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int sum = 0;
    int rounds = 0;
    int amount = 0;
    for (int i = 1; i < 500; i++) {
        amount += i;

        sum += amount;

        if (sum > n) {
            cout << rounds;
            break;
        } else if (sum == n) {
            cout << rounds + 1;
            break;
        } else {
            rounds++;
        }
    }

    return 0;
}