#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);

    int N;
    cin >> N;

    string A, B;
    cin >> A >> B;

    int seperate = 0;
    bool different = false;

    for (int i = 0; i < N; i++) {
        if (A[i] != B[i] && different == false) {
            seperate++;
            different = true;
        } else if (A[i] == B[i]) {
            different = false;
        }
    }

    cout << seperate << endl;

    return 0;
}