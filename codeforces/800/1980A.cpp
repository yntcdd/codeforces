#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string a;
        cin >> a;

        int alphabet[7] = {};

        int more = 0;

        for (int i = 0; i < n; i++) {
            alphabet[a[i] - 'A']++;
        }
        for (int i = 0; i < 7; i++) {
            if (alphabet[i] < m) {
                more += m - alphabet[i];
            }
        }

        cout << more << endl;
    }

    return 0;
}