#include <iostream>
using namespace std;

int main() {

    int n, k;

    cin >> n >> k;

    int time = 240 - k;
    int timepaseed = 0;

    int problems = 0;

    for (int i = 0; i < n; i++) {
        if ((i+1) * 5 + timepaseed <= time) {
            problems++;
            timepaseed += (i+1) * 5;
        }
    }

    cout << problems;

    return 0;
}