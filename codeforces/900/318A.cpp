#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long numOdds = (n + 1) / 2;

    if (k <= numOdds)
        cout << 2 * k - 1;
    else
        cout << 2 * (k - numOdds);

    return 0;
}
