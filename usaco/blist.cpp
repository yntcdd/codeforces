#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    ifstream fin("blist.in");
    ofstream fout("blist.out");

    int n;
    fin >> n;

    int s[n], t[n], b[n];
    for (int i = 0; i < n; i++) {
        fin >> s[i] >> t[i] >> b[i];
    }

    int buckets = 0;
    int max_buckets = 0;

    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j < n; j++) {
            if (s[j] == i) {
                buckets += b[j];
            }
            if (t[j] == i) {
                buckets -= b[j];
            }
        }
        max_buckets = max(max_buckets, buckets);
    }

    fout << max_buckets << endl;

    return 0;
}
