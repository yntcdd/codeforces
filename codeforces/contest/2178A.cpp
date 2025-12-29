#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int ys = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'Y') {
                ys++;
            }
        }
        
        if (ys >= 2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}