#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    ifstream fin("traffic.in");
    ofstream fout("traffic.out");

    int N;
    fin >> N;

    string type[N];
    int L[N], R[N];

    for (int i = 0; i < N; i++) {
        fin >> type[i] >> L[i] >> R[i];
    }

    int low = 0, high = 1e9;

    for (int i = N - 1; i >= 0; i--) {
        if (type[i] == "none") {
            low = max(low, L[i]);
            high = min(high, R[i]);
        }
        else if (type[i] == "on") {
            low -= R[i];
            high -= L[i];
            low = max(low, 0);
        }
        else {
            low += L[i];
            high += R[i];
        }
    }

    fout << low << " " << high << endl;

    low = 0;
    high = 1e9;

    for (int i = 0; i < N; i++) {
        if (type[i] == "none") {
            low = max(low, L[i]);
            high = min(high, R[i]);
        }
        else if (type[i] == "on") {
            low += L[i];
            high += R[i];
        }
        else {
            low -= R[i];
            high -= L[i];
            low = max(low, 0);
        }
    }

    fout << low << " " << high << endl;

    return 0;
}
