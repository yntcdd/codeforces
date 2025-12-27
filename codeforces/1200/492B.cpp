#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    double lights[n];
    for (int i = 0; i < n; i++) {
        cin >> lights[i];
    }

    sort(lights, lights + n);

    double biggestdifference = lights[0] * 2;

    for (int i = 1; i < n; i++) {
        double gap = lights[i] - lights[i - 1];
        if (gap > biggestdifference) {
            biggestdifference = gap;
        }
    }

    double endgap = (l - lights[n - 1]) * 2;
    if (endgap > biggestdifference) {
        biggestdifference = endgap;
    }

    cout << fixed << setprecision(10) << biggestdifference / 2.0;
    return 0;
}
