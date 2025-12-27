#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        const string target = "Timur";

        // If the string doesn't have length 5, it can't be a permutation of "Timur"
        if (n != (int)target.size()) {
            cout << "NO\n";
            continue;
        }

        // Sort both the input and the target
        sort(s.begin(), s.end());
        string sorted_target = target;
        sort(sorted_target.begin(), sorted_target.end());

        // Check if they match
        if (s == sorted_target) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
