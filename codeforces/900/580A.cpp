#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int ns[n] = {};

    for (int i = 0; i < n; i++) {
        cin >> ns[i];
    }

    int counter = 0;
    int current = 0;
    int biggestcounter = 0;
    for (int j = 0; j < n; j++) {
        if (biggestcounter < n - j) {
            counter = 1;
            current = ns[j];
            for (int i =j+1; i < n; i++) {
                if (ns[i] >= current) {
                    counter++;
                    current = ns[i];
                } else {
                    break;
                }
            }
            if (counter > biggestcounter) {
                biggestcounter = counter;
            }
        }
    }

    cout << biggestcounter;

    return 0;
}