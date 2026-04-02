#include <bits/stdc++.h>
using namespace std;

int main() {

    ifstream fin("tttt.in");
    ofstream fout("tttt.out");

    string a, b, c;
    fin >> a >> b >> c;

    set<char> oneSet;
    set<pair<char,char>> twoSet;

    for (int i = 0; i < 3; i++) {
        if (a[i] == b[i] && b[i] == c[i]) {
            oneSet.insert(a[i]);
        } else if (a[i] == b[i] || a[i] == c[i] || b[i] == c[i]) {
            set<char> s = {a[i], b[i], c[i]};
            if (s.size() == 2) {
                vector<char> v(s.begin(), s.end());
                twoSet.insert({v[0], v[1]});
            }
        }
    }

    if (a[0] == a[1] && a[1] == a[2]) {
        oneSet.insert(a[0]);
    } else {
        set<char> s = {a[0], a[1], a[2]};
        if (s.size() == 2) {
            vector<char> v(s.begin(), s.end());
            twoSet.insert({v[0], v[1]});
        }
    }

    if (b[0] == b[1] && b[1] == b[2]) {
        oneSet.insert(b[0]);
    } else {
        set<char> s = {b[0], b[1], b[2]};
        if (s.size() == 2) {
            vector<char> v(s.begin(), s.end());
            twoSet.insert({v[0], v[1]});
        }
    }

    if (c[0] == c[1] && c[1] == c[2]) {
        oneSet.insert(c[0]);
    } else {
        set<char> s = {c[0], c[1], c[2]};
        if (s.size() == 2) {
            vector<char> v(s.begin(), s.end());
            twoSet.insert({v[0], v[1]});
        }
    }

    if (a[0] == b[1] && b[1] == c[2]) {
        oneSet.insert(a[0]);
    } else {
        set<char> s = {a[0], b[1], c[2]};
        if (s.size() == 2) {
            vector<char> v(s.begin(), s.end());
            twoSet.insert({v[0], v[1]});
        }
    }

    if (a[2] == b[1] && b[1] == c[0]) {
        oneSet.insert(a[2]);
    } else {
        set<char> s = {a[2], b[1], c[0]};
        if (s.size() == 2) {
            vector<char> v(s.begin(), s.end());
            twoSet.insert({v[0], v[1]});
        }
    }

    fout << oneSet.size() << endl;
    fout << twoSet.size() << endl;

    return 0;
}