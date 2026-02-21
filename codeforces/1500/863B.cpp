#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> w(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> w[i];
    }

    sort(w.begin(), w.end());

    int answer = 1e9;

    // choose two singles
    for (int i = 0; i < 2 * n; i++) {
        for (int j = i + 1; j < 2 * n; j++) {

            vector<int> remaining;

            // collect remaining people
            for (int k = 0; k < 2 * n; k++) {
                if (k != i && k != j) {
                    remaining.push_back(w[k]);
                }
            }

            // calculate instability
            int instability = 0;

            for (int k = 0; k < remaining.size(); k += 2) {
                instability += remaining[k + 1] - remaining[k];
            }

            answer = min(answer, instability);
        }
    }

    cout << answer << endl;

    return 0;
}