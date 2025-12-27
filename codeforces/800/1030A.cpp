#include <iostream>

using namespace std;

int main() {

    int people;
    cin >> people;

    bool hard = false;

    for (int i = 0; i < people; i++) {
        int eh;
        cin >> eh;

        if (eh == 1) {
            hard = true;
        }
    }

    if (hard) {
        cout << "HARD";
    } else {
        cout << "EASY";
    }

    return 0;
}