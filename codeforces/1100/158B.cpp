#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count[5] = {0}; // we only care about 1..4

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    int taxis = 0;

    // 4s each need their own taxi
    taxis += count[4];

    // 3s pair with 1s
    taxis += count[3];
    count[1] = max(0, count[1] - count[3]);

    // 2s pair with 2s
    taxis += count[2] / 2;
    count[2] %= 2;

    // If one 2 remains, combine with up to two 1s
    if (count[2] == 1) {
        taxis++;
        count[1] -= min(2, count[1]);
    }

    // Remaining 1s — 4 per taxi
    if (count[1] > 0)
        taxis += (count[1] + 3) / 4;

    cout << taxis;
    return 0;
}
