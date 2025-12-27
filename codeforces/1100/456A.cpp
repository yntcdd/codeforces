#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    bool happy = false;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        if (a < b) {
            happy = true;
            break;
        }
    }

    if (happy) cout << "Happy Alex" << endl;
    else cout << "Poor Alex" << endl;

    return 0;
}