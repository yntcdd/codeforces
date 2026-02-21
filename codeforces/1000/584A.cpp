#include <iostream>

using namespace std;

int main() {

    long long n, t;
    cin >> n >> t;

    long long fake = 1;

    if (n == 1 && t == 10) {
        cout << "-1\n";
        return 0;
    }

    if (t == 10) {
        for (int i = 0; i < n - 1; i++) {
            cout << "1";
        }
        cout << "0";
    } else {
        for (int i = 0; i < n; i++) {
            cout << t;
        }
    }

    return 0;
}