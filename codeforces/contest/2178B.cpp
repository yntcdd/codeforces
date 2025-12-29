#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;

        int us = 0;
        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                if (s[i] == 's') {
                    continue;
                } else {
                    if (i != 0) {
                        i = j + 1;
                    }
                    break;
                }
            } 
            if (s[i] == 'u') {
                us++;
                s[i] = 's';
            }
        }
        
        if (s[s.size() - 1] == 'u') {
            us++;
        }
        if (s[0] == 'u') {
            us++;
        }

        cout << us << endl;
    }

    return 0;
}