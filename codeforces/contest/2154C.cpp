#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int t;

    cin >> t;

    int games[t] = {};
    int cases[t] = {};

    for (int i = 0; i < t; i++) {
        cin >> games[i];
        cases[i] = games[i] - 1 + games[i] - 2 + 1; 
    }
    for (int i = 0; i < t; i++) {
        cout << cases[i] << endl;
    }

    return 0;
}