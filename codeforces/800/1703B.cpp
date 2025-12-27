#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<bool> solved(26, false);
        int balloons = 0;

        for (char c : s) {
            int idx = c - 'A';
            // Always give 1 balloon for solving
            balloons += 1;
            // If it's the first time this problem is solved, give an extra
            if (!solved[idx]) {
                balloons += 1;
                solved[idx] = true;
            }
        }

        cout << balloons << "\n";
    }
    return 0;
}
