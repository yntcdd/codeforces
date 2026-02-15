#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int n;
vector<int> p;

long long recursive(int index, long long sum1, long long sum2) {
    if (index == n) {
        return abs(sum1 - sum2);
    }

    return min(recursive(index + 1, sum1 + p[index], sum2), recursive(index + 1, sum1, sum2 + p[index]));
}

int main() {

    cin >> n;
    p.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    cout << recursive(0, 0, 0) << endl;

    return 0;
}