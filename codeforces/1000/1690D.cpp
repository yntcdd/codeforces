#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + (s[i] == 'W');
        }

        int smallest = 1000000000;
        for (int i = 0; i + k <= n; i++) {
            int whites = pref[i + k] - pref[i];
            smallest = min(whites, smallest);
        }

        cout << smallest << endl;
    }    

    return 0;
}