#include <iostream>
#include <string>

using namespace std;

int main() {

    string word;

    cin >> word;
    int length = 0;

    for (int i = 0; i < word.size(); i++) {
        if (length == 0) {
            if (word[i] == 'h') {
                length = 1;
            }
        } else if (length == 1) {
            if (word[i] == 'e') {
                length = 2;
            }
        } else if (length == 2) {
            if (word[i] == 'l') {
                length = 3;
            }
        } else if (length == 3) {
            if (word[i] == 'l') {
                length = 4;
            }
        } else if (length == 4) {
            if (word[i] == 'o') {
                length = 5;
            }
        }
    }
    if (length == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}