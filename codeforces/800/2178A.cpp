#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        bool two = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'Y' && s[i + 1] == 'Y') {
                two = true;
                break;
            }
        }
        
        if (two) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}