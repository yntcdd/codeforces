#include <iostream>

using namespace std;

int main() {

    int t;
    
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;

        cin >> n;

        int zeros = 0;
        int mostzeros = 0;
        for (int j = 0; j < n; j++) {
            int x;

            cin >> x;

            if (x == 0) {
                zeros++;
                if (mostzeros < zeros) {
                    mostzeros = zeros;
                }
            } else {
                zeros = 0;
            }
        }
        cout << mostzeros << endl;
    }

    return 0;
}