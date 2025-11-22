#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int len = s.size();

        if (len % 2 == 1) {
            // odd length -> cannot be square
            cout << "NO\n";
        } else {
            int half = len / 2;
            string a = s.substr(0, half);
            string b = s.substr(half, half);

            if (a == b) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
