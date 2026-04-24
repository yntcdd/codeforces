#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int flowers = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += p[k];
            }

            int len = j - i + 1;

            if (sum % len != 0) continue;

            int average = sum / len;

            for (int k = i; k <= j; k++) {
                if (p[k] == average) {
                    flowers++;
                    break;
                }
            }
        }
    }

    cout << flowers << endl;

    return 0;
}