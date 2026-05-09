#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<char> letter(n);
    vector<int> p(n);

    for (int i = 0; i < n; i++) {
        cin >> letter[i];
        cin >> p[i];
    }

    int ans = n;

    for (int i = 0; i < n; i++) {
        
        int liars = 0;

        for (int j = 0; j < n; j++) {
            if (letter[j] == 'G') {
                if (p[i] < p[j]) {
                    liars++;
                }
            } else {
                if (p[i] > p[j]) {
                    liars++;
                }
            }
        }

        ans = min(ans, liars);
    }

    cout << ans;

    return 0;
}