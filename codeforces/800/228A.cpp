#include <iostream>

using namespace std;

int main() {

    int colors[4] = {};
 
    for (int i = 0; i < 4; i++) {
        cin >> colors[i];
    }

    int distinct = 0;

    for (int i = 0; i < 4; i++) {
        bool seen = false;
        for (int j = 0; j < i; j++) {
            if (colors[i] == colors[j]) {
                seen = true;
            }
        }
        if (!seen) {
            distinct++;
        }
    }

    cout << 4 - distinct;

    return 0;
}