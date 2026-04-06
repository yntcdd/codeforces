#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S, T;
    cin >> S >> T;

    string res;
    int tLen = T.size();

    for (char c : S) {
        res.push_back(c);

        if (res.size() >= tLen) {
            if (res.substr(res.size() - tLen) == T) {
                // Remove T
                res.resize(res.size() - tLen);
            }
        }
    }

    cout << res << '\n';
    return 0;
}