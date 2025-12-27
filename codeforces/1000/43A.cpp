#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string one, two;
    int pointx = 0, pointy = 0;

    cin >> one;
    pointx = 1;  // The first team has already scored one goal (appearance)

    for (int i = 1; i < n; i++) {
        string team;
        cin >> team;
        if (team == one) {
            pointx++;
        } else {
            pointy++;
            two = team;
        }
    }

    if (pointx > pointy) {
        cout << one;
    } else {
        cout << two;
    }

    return 0;
}
