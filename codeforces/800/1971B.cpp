#include <iostream>
#include <string>

using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;
    
        char a = '1';
        bool good = true;
        int one;
        int two;
        for (int i = 0; i < s.size(); i++) {
            if (a == '1') {
                a = s[i];
                one = i;
            }
            if (s[i] != a) {
                good = false;
                two = i;
            }
        }
        if (!good) {
            cout  << "YES" << endl;
            char b = s[one];
            s[one] = s[two];
            s[two] = b;
            cout << s << endl;
        } else {
            cout << "NO" << endl;
        }
    }    

    return 0;
}