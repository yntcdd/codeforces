#include <iostream>

using namespace std;

int main() {

    int n, p;
    cin >> n >> p;

    int levels[n] = {};

    for (int i = 0; i < n; i++) {
        levels[i] = i + 1;
    }

    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        for (int j = 0; j < n; j++) {
            if (levels[j] == level) {
                levels[j] = 0;
            }
        }
    }
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        for (int j = 0; j < n; j++) {
            if (levels[j] == level) {
                levels[j] = 0;
            }
        }
    }
    bool good = true;
    for (int i = 0; i < n; i++) {
        if (levels[i] != 0) {
            good = false;
        }
    }
    if (good) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    return 0;
}