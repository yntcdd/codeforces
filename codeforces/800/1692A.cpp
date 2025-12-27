#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int racers[4] = {};
        cin >> racers[0] >> racers[1] >> racers[2] >> racers[3];

        int timur = racers[0];

        sort(racers, racers + 4, greater<int>());

        auto it = find(racers, racers + 4, timur);

        cout << it - racers << endl;
    }
    return 0;
}