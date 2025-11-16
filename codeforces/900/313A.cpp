#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // If non-negative, do nothing
    if (n >= 0) {
        cout << n << "\n";
    } else {
        // Option 1: remove last digit
        int option1 = n / 10;

        // Option 2: remove second-last digit
        // Example: n = -1234
        // n / 100 = -12, n % 10 = 4, so: -120 + 4 = -116 → but this logic works with math
        int option2 = (n / 100) * 10 + (n % 10);

        // Take the maximum (least negative)
        int result = max(option1, option2);

        cout << result << "\n";
    }

    return 0;
}
