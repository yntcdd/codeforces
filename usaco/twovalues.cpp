#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    map<int, int> there; 
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (there.count(x-a[i])) {
            cout << i + 1 << " " << there[x-a[i]] << endl;
            return 0;
        }
        there[a[i]] = i+1;
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}