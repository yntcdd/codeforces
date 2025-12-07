#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int water = 0;

        int longest = 0;
        int current = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                water++;
                current++;
                longest = max(longest, current);
            } else {
                current = 0;
            }
        }

        if (longest >= 3) {
            cout << 2 << endl;
        } else {
            cout << water << endl;
        }
    }

    return 0;
}