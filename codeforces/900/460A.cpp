#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int days = 0;
    while (n > 0) {
        days++;
        n--;
        if (days % m == 0) {
            n++;
        }
    }

    cout << days;

    return 0;
}