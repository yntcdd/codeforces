#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;

    cin >> t;

    while (t--) {
        string word;
        cin >> word;

        int a = 0;
        int b = 0;
        for (int i = 0; i < 5; i++) {
            if (word[i] == 'B') {
                b++;
            } else {
                a++;
            }
        }

        if (b > a) {
            cout << 'B' << endl;
        } else {
            cout << 'A' << endl;
        }
    }

    return 0;
}