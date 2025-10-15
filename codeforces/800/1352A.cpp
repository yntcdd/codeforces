#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    int t;
    cin >> t;

    string summands[t] = {};
    int round[t] = {};

    for (int i = 0; i < t; i++) {
        string x;
        int y = 0;
        cin >> x;
        for (int j = 0; j < x.size(); j++) {
            if (x[j] != '0') {
                y++;
            }
        }
        cout << y << endl;
        for (int j = 0; j < x.size(); j++) {
            if (x[j] != '0') {
                string word;
                word += x[j];
                for (int k = 0; k < x.size() - j - 1; k++) {
                    word += '0';
                }
                cout << word << ' ';
            }
        }
        cout << endl;

    }

    return 0;
}