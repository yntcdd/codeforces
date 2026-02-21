#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;

    vector<int> months(12);
    for (int i = 0; i < 12; i++) {
        cin >> months[i];
    }

    // If no growth needed
    if (k == 0) {
        cout << 0 << "\n";
        return 0;
    }

    // Sort in descending order
    sort(months.begin(), months.end(), greater<int>());

    int sum = 0;
    int count = 0;

    // Take from largest to smallest until we reach k
    for (int grow : months) {
        sum += grow;
        count++;
        if (sum >= k) {
            cout << count << "\n";
            return 0;
        }
    }

    // If still less than k
    cout << -1 << "\n";
    return 0;
}
