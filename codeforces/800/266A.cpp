#include <iostream>
#include <string>

using namespace std;

int main() {

    int stones;
    int repeating = 0;
    string colors;

    cin >> stones;
    cin >> colors;

    for (int i = 0; i < colors.size(); i++) {
        if (colors[i] == colors[i + 1]) {
            repeating++;
        }
    }

    cout << repeating;

    return 0;
}