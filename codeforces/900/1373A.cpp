#include <iostream>
#include <string>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int turn = 0;

        int letters = s.size();
        while (letters > 1) {
            bool found = false;
            for (int i = 0; i < letters- 1; i++) {
                if (s[i] == '0' && s[i + 1] == '1' || s[i] == '1' && s[i + 1] == '0') {
                    found = true;
                    s.erase(i, 2);
                    letters -= 2;
                    break;
                }
            }
            if (found == false) {
                letters = 0;
            } else {
                turn = 1 - turn;
            }
        }

        if (turn == 0) {
            cout << "NET" << endl;
        } else {
            cout << "DA" << endl;
        }
    }

    return 0;
}