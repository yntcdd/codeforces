#include <bits/stdc++.h>
using namespace std;

int main() {

    ifstream fin("mowing.in");
    ofstream fout("mowing.out");

    int N;
    fin >> N;

    vector<char> directions(N);
    vector<int> steps(N);
    
    for (int i = 0; i < N; i++) {
        fin >> directions[i];
        fin >> steps[i];
    }

    map<pair<int,int>, int> grid;

    int time = 0;
    int x = 1000;
    int y = 1000;
    grid[{x, y}] = 0;

    int answer = 1001;

    for (int i = 0; i < N; i++) {
        int dirX = 0, dirY = 0;

        if (directions[i] == 'N') dirY = 1;
        else if (directions[i] == 'S') dirY = -1;
        else if (directions[i] == 'W') dirX = -1;
        else dirX = 1;

        for (int j = 0; j < steps[i]; j++) {
            x += dirX;
            y += dirY;
            time++;

            if (grid.count({x, y})) {
                answer = min(answer, time - grid[{x, y}]);
            }

            grid[{x, y}] = time;
        }
    }

    if (answer == 1001) answer = -1;

    fout << answer << endl;

    return 0;
}