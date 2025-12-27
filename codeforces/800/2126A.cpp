#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int smallest = s[0] - '0';
        for (int i = 0; i < s.size(); i++) {
            if (s[i] - '0' < smallest) {
                smallest = s[i] - '0';
            }
        }

        cout << smallest << endl;
    }

    return 0;
} 