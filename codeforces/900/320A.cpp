#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cin >> s;

    if (s[0] != '1') {
        cout << "NO" << "\n";
        return 0;
    }

    int inarow = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '4') {
            inarow++;
            if (inarow > 2) {
                cout << "NO" << "\n";
                return 0;
            }
        } else if (s[i] == '1') {
            inarow = 0;
        } else {
            cout << "NO" << "\n";
            return 0;
        }
    }

    cout << "YES" << "\n";
    
    return 0;
}