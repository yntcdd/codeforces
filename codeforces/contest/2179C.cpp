#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;  
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n] = {};

        int smallest = 100000000;
        int secondsmallest = 100000000;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            smallest = min(smallest, a[i]);
        }
        for (int i = 0; i < n; i++) {
            if (a[i] != smallest) {
                secondsmallest = min(secondsmallest, a[i]);
            }
        }

        if (secondsmallest - smallest > smallest) {
            cout << secondsmallest - smallest << endl;
        } else {
            cout << smallest << endl;
        }
    }

    return 0;
}