#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("shell.in");
    ofstream fout("shell.out");

    int n;
    fin >> n;

    int pos1 = 1, pos2 = 2, pos3 = 3;
    int score1 = 0, score2 = 0, score3 = 0;

    for (int i = 0; i < n; i++) {
        int a, b, g;
        fin >> a >> b >> g;

        if (pos1 == a) pos1 = b;
        else if (pos1 == b) pos1 = a;

        if (pos2 == a) pos2 = b;
        else if (pos2 == b) pos2 = a;

        if (pos3 == a) pos3 = b;
        else if (pos3 == b) pos3 = a;

        if (pos1 == g) score1++;
        if (pos2 == g) score2++;
        if (pos3 == g) score3++;
    }

    fout << max({score1, score2, score3}) << "\n";
    return 0;
}
