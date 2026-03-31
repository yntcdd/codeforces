#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("cbarn.in");
    ofstream fout("cbarn.out");

    int n;
    fin >> n;

    vector<int> cows(n);
    for (int i = 0; i < n; i++) {
        fin >> cows[i];
    }

    int ans = n * n * 100;

    for (int unlock = 0; unlock < n; unlock++) {
        int currentDistance = 0;

        for (int offset = 0; offset < n; offset++) {
            currentDistance += offset * cows[(unlock + offset) % n];
        }

        ans = min(ans, currentDistance);
    }

    fout << ans << "\n";
}