#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n; 
        cin >> n;

        string s;
        cin >> s;

        int l = 0;
        int r = n - 1;

        // remove pairs while they are different
        while (l < r && s[l] != s[r]) {
            l++;
            r--;
        }

        // remaining length
        cout << (r - l + 1) << endl;
    }

    return 0;
}
