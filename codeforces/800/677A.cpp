#include <iostream>

using namespace std;

int main() {
    int n, h;

    cin >> n >> h;

    int heights[n] = {};
    int width = 0;
    for (int i = 0; i < n; i++) {
        cin >> heights[i]; 
        if (heights[i] <= h) {
            width += 1;
        } else {
            width += 2;
        }
    }

    cout << width;

    return 0;
}