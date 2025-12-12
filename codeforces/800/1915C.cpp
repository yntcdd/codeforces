#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0; 

        for (int i = 0; i < n; i++) {
            long long x;   
            cin >> x;
            sum += x;
        }

        long long r = sqrt(sum);

        if (r * r == sum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
