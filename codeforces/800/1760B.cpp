#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int largest = 0;
        
        for (int i = 0; i < n; i++) {
            int index = alphabet.find(s[i]);
            if (index > largest) {
                largest = index;
            }
        }

        cout << largest + 1 << endl;
    }

    return 0;
}