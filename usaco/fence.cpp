#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int overlap = max(0, min(b, d) - max(a, c));
    int total = (b - a) + (d - c) - overlap;

    cout << total << endl;

    return 0;
}