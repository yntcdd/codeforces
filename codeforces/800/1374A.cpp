#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;

        // Compute the largest k <= n such that k % x == y
        long long k = ( (n - y) / x ) * x + y;
        cout << k << "\n";
    }
    return 0;
}
