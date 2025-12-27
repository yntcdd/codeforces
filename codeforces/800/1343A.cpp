#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        // Try k = 2, 3, 4, ... until 2^k - 1 > n
        for (int k = 2; ; ++k) {
            long long s = (1LL << k) - 1;  // 2^k - 1
            if (s > n) break;
            if (n % s == 0) {
                cout << (n / s) << "\n";
                break;
            }
        }
    }
    return 0;
}
