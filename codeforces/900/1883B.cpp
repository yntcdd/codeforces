#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    while (t--) {
        int numalphabet[26] = {0};

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        for (int i = 0; i < n; i++) {
            numalphabet[s[i] - 'a']++;
        }

        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (numalphabet[i] % 2 != 0) {
                count++;
            }
        }

        count -= 1;

        if (count <= k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}