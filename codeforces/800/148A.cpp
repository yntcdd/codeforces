#include <iostream>

using namespace std;

int main() {

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int injured = 0;
    for (int i = 1; i < d+1; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            injured++;
        }
    }
    cout << injured;

    return 0;
}