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

        int balance = 0;
        int moves = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                balance++;
            } else {
                if (balance > 0) {
                    balance--;
                } else {
                    moves++;
                }
            }
        }

        cout << moves << endl;

    }

    return 0;
}