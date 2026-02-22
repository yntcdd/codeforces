#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("whereami.in");
    ofstream fout("whereami.out");

    int n;
    fin >> n;

    string s;
    fin >> s;

    for (int i = 1; i <= n; i++) {
        bool good = true;
        unordered_map<string, int> sub_frequency;

        for (int j = 0; j <= n - i; j++) {  // FIXED increment
            string sub = s.substr(j, i);
            sub_frequency[sub]++;

            if (sub_frequency[sub] > 1) {
                good = false;
                break;
            }
        }

        if (good) {
            fout << i << endl;
            break;
        }
    }

    return 0;
}