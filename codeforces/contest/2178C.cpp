#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        long long a;
        cin >> a;
        for (int i = 0; i < n - 1; i++) {
            long long b;
            cin >> b;

            if (a < 0 && b < 0) {
                sum -= b;
            } else if (a < 0 && b > 0) {
                if (abs(a) > abs(b)) {
                    sum -= b;
                } else {
                    sum += a;
                    a = b;
                }
            } else if (a > 0 && b > 0) {
                sum += a;
                a = b;
            } else if (a > 0 && b < 0) {
                if (a + b < abs(b)) {
                    sum -= b;
                } else {
                    if (a > abs(b)) {
                        sum += a;
                        a = b;
                    } else {
                        sum -= b;
                    }
                }
            }
        }
        
        cout << sum << endl;
    }

    return 0;
}