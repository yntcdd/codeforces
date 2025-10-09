#include <iostream>
#include <string>

using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string row;
        bool which = true;
        if (i % 2 == 0) {
            for (int i = 0; i < m; i++) {
                row += '#';
            }
        } else {
            if (which) {
                for (int i = 0; i < m - 1; i++) {
                    row += '.';
                }
                row += '#';
                which = false;
            } else {
                row += '#';
                for (int i = 0; i < m - 1; i++) {
                    row += '.';
                }
            }
        }
        cout << row << endl;
    }

    return 0;
}