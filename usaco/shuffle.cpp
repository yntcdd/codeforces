#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream fin("shuffle.in");
    ofstream fout("shuffle.out");

    int n;
    fin >> n;

    vector<int> a(n + 1), inv(n + 1);
    for (int i = 1; i <= n; i++) {
        fin >> a[i];
        inv[a[i]] = i; 
    }

    vector<int> cows(n + 1);
    for (int i = 1; i <= n; i++) {
        fin >> cows[i];
    }

    for (int t = 0; t < 3; t++) {
        vector<int> prev(n + 1);
        for (int i = 1; i <= n; i++) {
            prev[inv[i]] = cows[i];
        }
        cows = prev;
    }

    for (int i = 1; i <= n; i++) {
        fout << cows[i] << endl;
    }

    return 0;
}
