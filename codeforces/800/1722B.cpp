#include <iostream>
#include <string>

using namespace std;

int main() {
//check
    int t;
    cin >>  t;

    while (t--) {
        int n;
        cin >> n;

        string first;
        string second;

        cin >> first >> second;
        bool yes = true;
        for (int i = 0; i < n; i++) {
            if (first[i] != second[i]) {
                if (first[i] == 'R' || second[i] == 'R') {
                    yes = false;
                }
            }
        }
        if (yes) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}