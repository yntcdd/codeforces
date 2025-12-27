#include <iostream>

using namespace std;

int main() {

    int number;
    int groups = 1;

    cin >> number;
    
    int magnets[number] = {};

    for (int i = 0; i < number; i++) {

        cin >> magnets[i];

        if (i > 0) {
            if (magnets[i] == 10 && magnets[i - 1] == 10 || magnets[i] == 1 && magnets[i-1] == 1) {
                // dlasdklasdk
            } else {
                groups++;
            }
        }
    }

    cout << groups;

    return 0;
}