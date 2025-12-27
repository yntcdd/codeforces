#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;
    string out;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '.') {
            out.push_back('0');
        } else { // s[i] == '-'
            if (i + 1 < s.size()) {
                if (s[i+1] == '.') {
                    out.push_back('1');
                } else { // s[i+1] == '-'
                    out.push_back('2');
                }
                ++i; // skip the next char because we've consumed a pair
            }
        }
    }
    cout << out << '\n';
    return 0;
}
