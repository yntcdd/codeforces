#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double n, m, a;
    cin >> n >> m >> a;

    long long result = (long long)ceil(m/a) * (long long)ceil(n/a);

    cout << result;

    return 0;
}