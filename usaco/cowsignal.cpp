#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream fin("cowsignal.in");
    ofstream fout("cowsignal.out");

    int m, n, k;
    fin >> m >> n >> k;

    for (int i = 0; i < m; i++) {
        string s;
        string now = "";
        fin >> s;

        for (int j = 0; j < n; j++) {
            for (int h = 0; h < k; h++) {
                now += s[j];
            }
        }

        for (int j = 0; j < k; j++) {
            fout << now << endl;
        }
    }

    return 0;
}
