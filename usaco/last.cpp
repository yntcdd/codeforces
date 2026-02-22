#include <bits/stdc++.h>
using namespace std;

int main() {

    ifstream fin("notlast.in");
    ofstream fout("notlast.out");

    int n;
    fin >> n;

    map<string, int> raw;

    // Initialize all cows to 0
    raw["Bessie"] = 0;
    raw["Elsie"] = 0;
    raw["Daisy"] = 0;
    raw["Gertie"] = 0;
    raw["Annabelle"] = 0;
    raw["Maggie"] = 0;
    raw["Henrietta"] = 0;

    for (int i = 0; i < n; i++) {
        string a;
        int b;
        fin >> a >> b;
        raw[a] += b;
    }

    vector<pair<int, string>> cows;
    for (pair<string, int> t : raw) {
        cows.push_back({t.second, t.first});
    }
    sort(cows.begin(), cows.end());

    int index = 0;

    // Skip all cows tied for minimum
    while (index < cows.size() && cows[index].first == cows[0].first) {
        index++;
    }

    // If no second minimum exists
    if (index == cows.size()) {
        fout << "Tie" << endl;
        return 0;
    }

    // Check if second minimum is unique
    int count = 0;
    for (int i = 0; i < cows.size(); i++) {
        if (cows[i].first == cows[index].first) {
            count++;
        }
    }

    if (count > 1) {
        fout << "Tie" << endl;
    } else {
        fout << cows[index].second << endl;
    }

    return 0;
}