#include <iostream>

using namespace std;

int main() {
    long long num;
    long long sumo = 0;
    long long sume = 0;
    cin >> num;
    if (num % 2 == 0) {
        sumo = (num / 2) * (num / 2);
        sume = num / 2 * (num  / 2 + 1);
    } else {
        sumo = ((1 + num) / 2) * ((1 + num) / 2);
        sume = ((num - 1) / 2) * ((num + 1) / 2);
    }

    cout << sume - sumo;

    return 0;
}