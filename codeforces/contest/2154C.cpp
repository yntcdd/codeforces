#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        int countEven = 0;
        int countOneOrZero = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] % 2 == 0) countEven++;
            if(a[i] <= 1) countOneOrZero++;
        }

        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x; // b[i]=1, ignore
        }

        long long answer;
        if(countEven >= 2) answer = 0; // already gcd>1
        else if(countEven == 1) answer = 1; // increment one odd number to even
        else if(countOneOrZero >= 2) answer = 2; // increment two zeros/ones to 2
        else answer = 2; // increment any two odd numbers to even

        cout << answer << "\n";
    }
}
