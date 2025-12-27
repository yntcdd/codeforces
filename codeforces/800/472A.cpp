#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    bool finished = false;

    for (int i = 2; i < n; i++) {
        if (finished) {
            break;
        }
        for (int j = 2; j < i; j++) {
            if (finished) {
                break;
            }
            if (i % j == 0) {
                int x = n-i;
                for (int k = 2; k < x; k++) {
                    if (x % k == 0) {
                        cout << i << " " << x;
                        finished = true;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}