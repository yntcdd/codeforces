#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int first = - 1;
        int last;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                if (first == -1) {
                    first = i;
                }
                last = i; 
            }
        }

        cout << last - first + 1 << endl;
    }

    return 0;
}