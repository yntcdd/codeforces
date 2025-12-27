#include <iostream>
#include <string>

using namespace std;


int main() {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        string word;
        cin >> word;

        int wrong = 0;

        if (word[0] != 'c') {
            wrong++;
        }
        if (word[1] != 'o') {
            wrong++;
        }
        if (word[2] != 'd') {
            wrong++;
        }
        if (word[3] != 'e') {
            wrong++;
        }
        if (word[4] != 'f') {
            wrong++;
        }
        if (word[5] != 'o') {
            wrong++;
        }
        if (word[6] != 'r') {
            wrong++;
        }
        if (word[7] != 'c') {
            wrong++;
        }
        if (word[8] != 'e') {
            wrong++;
        }
        if (word[9] != 's') {
            wrong++;
        }

        cout << wrong << endl;
    }

    return 0;
}
