#include <bits/stdc++.h>
using namespace std;

int main() {

    long long N, K;
    cin >> N >> K;

    vector<long long> days(N);
    for (int i = 0; i < N; i++) {
        cin >> days[i];
    }

    long long much = 0;
    long long moonies = 0;

    for (int i = 0; i < N - 1; i++) {
        if (days[i+1] - days[i] <= K + 1) {
            much += days[i+1] - days[i];
        } else {
            moonies += much + 1 + K;
            much = 0;
        }
    }
    moonies += much + 1 + K;

    cout << moonies << endl;

    return 0; 
}