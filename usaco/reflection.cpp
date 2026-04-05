#include <bits/stdc++.h>
using namespace std;

// helper function for one 4-cell group
int calc(vector<string>& characters, int i, int j, int N) {
    int hashtags = 0;

    if (characters[i][j] == '#') hashtags++;
    if (characters[N - 1 - i][j] == '#') hashtags++;
    if (characters[i][N - 1 - j] == '#') hashtags++;
    if (characters[N - 1 - i][N - 1 - j] == '#') hashtags++;

    return min(hashtags, 4 - hashtags);
}

int main() {

    int N, U;
    cin >> N >> U;

    vector<string> characters(N);
    for (int i = 0; i < N; i++) {
        cin >> characters[i];
    }

    int changes = 0;

    // initial calculation (same idea as yours)
    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N / 2; j++) {
            changes += calc(characters, i, j, N);
        }
    }

    cout << changes << endl;

    // updates (optimized)
    for (int k = 0; k < U; k++) {
        int x, y;
        cin >> x >> y;

        x--; 
        y--; // remove if input is already 0-based

        // find the group this cell belongs to
        int i = min(x, N - 1 - x);
        int j = min(y, N - 1 - y);

        // remove old contribution
        changes -= calc(characters, i, j, N);

        // flip the cell
        if (characters[x][y] == '#') {
            characters[x][y] = '.';
        } else {
            characters[x][y] = '#';
        }

        // add new contribution
        changes += calc(characters, i, j, N);

        cout << changes << endl;
    }

    return 0;
}