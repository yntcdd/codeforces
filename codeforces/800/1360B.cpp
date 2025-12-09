#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int s[n] = {};

        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        sort(s, s + n);
        
        int smallest = 1000;
        int last = s[0];
        for (int i = 1; i < n; i++) {
            if (s[i] - last < smallest) {
                smallest = s[i] - last;
            }
            last = s[i];
        }

        cout << smallest << endl;
    }

    return 0;
}