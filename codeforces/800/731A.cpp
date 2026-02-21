#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    string s;
    cin >> s;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    int num = 0;
    for (int i = 0; i < s.size(); i++) {
        char x = s[i];
        int pos = alphabet.find(x);
        int pos2;

        if (i == 0) {
            pos2 = 0;
        } else {
            pos2 = alphabet.find(s[i-1]);
        }
        int diff = abs(pos - pos2);
        if (diff > 13) {
            diff = 26 - diff;
        }
        num += diff;
    }

    cout << num;

    return 0;
}