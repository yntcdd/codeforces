#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int games = 0;
    int home[n] = {};
    int away[n] = {};

    for (int i = 0; i < n; i++) {
        if (i != n - 1 || i != 0) {
            cin >> home[i] >> away[i];

            for (int j = 0; j < n; j++) {
                if (home[i] == away[j]) {
                    games++;
                }
                if (away[i] == home[j]) {
                    games++;
                }
            }
        } else {
            break;
        }
    } 

    cout << games;

    return 0;
}