#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string word;
        cin >> word;

        if (word == "YES" || word == "YEs" || word == "Yes" || word == "yes" || word == "yES" ||
        word == "yEs" || word == "yeS" || word == "YeS") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}