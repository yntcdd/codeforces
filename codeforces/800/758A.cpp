#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    int welfares[n] = {};

    for (int i = 0; i < n; i++) {
        cin >> welfares[i];
    }

    sort(welfares, welfares + n);

    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += welfares[n - 1] - welfares[i];
    }

    cout << sum;

    return 0;
}