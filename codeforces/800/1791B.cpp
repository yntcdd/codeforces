#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int x = 0;
        int y = 0;

        int passed = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') {
                y++;
            } else if (s[i] == 'D') {
                y--;
            } else if (s[i] == 'L') {
                x--;
            } else if (s[i] == 'R') {
                x++;
            }

            if (x == 1 && y == 1) {
                passed = true;
                break;
            }
        }

        if (passed) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}