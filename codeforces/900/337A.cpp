#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    int m;

    cin >> n >> m;
    n -= 1;

    int presents[m] = {};

    for (int i = 0; i < m; i++) {
        cin >> presents[i];
    }

    sort(presents, presents+m);

    int smallest = presents[m - 1];
    for (int i = 0; i < m - n; i++) {
        if ((presents[i+n] - presents[i]) < smallest) {
            smallest = presents[i+n] - presents[i];
        }
    }

    cout << smallest;

    return 0;
}