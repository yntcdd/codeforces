#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i] >> b[i];

        int winner_index = -1;
        int max_quality = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] <= 10 && b[i] > max_quality) {
                max_quality = b[i];
                winner_index = i;
            }
        }

        cout << winner_index + 1 << "\n";
    }

    return 0;
}
