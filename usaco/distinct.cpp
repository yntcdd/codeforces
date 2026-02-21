#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> x(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    int distinct = 1;

    for (int i = 1; i < n; i++) {
        if (x[i] != x[i - 1]) {
            distinct++;
        }
    }

    cout << distinct << endl;

    return 0;
}