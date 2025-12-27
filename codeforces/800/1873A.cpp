#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        string word;
        cin >> word;

        if (
            word == "abc" || word == "acb" || word == "bac" ||
            word == "cba"
        )   {
            cout << "YES" << endl;
        } else {
            cout << "NO" <<  endl;
        }
    }

    return 0;
}