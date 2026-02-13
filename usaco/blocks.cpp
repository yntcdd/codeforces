#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream fin("blocks.in");
    ofstream fout("blocks.out");

    int n;
    fin >> n;

    int alphabet[26] = {};

    for (int i = 0; i < n; i++) {

        string a, b;
        fin >> a >> b;

        int countA[26] = {};
        int countB[26] = {};

        for (int j = 0; j < a.size(); j++) {
            countA[a[j] - 'a']++;
        }

        for (int j = 0; j < b.size(); j++) {
            countB[b[j] - 'a']++;
        }

        for (int k = 0; k < 26; k++) {
            alphabet[k] += max(countA[k], countB[k]);
        }
    }

    for (int i = 0; i < 26; i++) {
        fout << alphabet[i] << endl;
    }

    return 0;
}
