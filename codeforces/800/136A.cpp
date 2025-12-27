#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int gifts[n] = {};

    for (int i = 0; i < n; i++) {
        int gift;
        cin >> gift;

        gifts[gift - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << gifts[i] << ' ';
    }

    return 0;
}