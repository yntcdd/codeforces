#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long sum = 0;

        long long minsum = 0;

        sum = (n + 1) * n / 2;

        sum -= (n - k + 1) * (n - k) / 2;

        minsum = (k + 1) * k / 2;

        if (sum >= x && minsum <= x) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}