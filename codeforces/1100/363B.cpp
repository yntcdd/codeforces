#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum = 0;
    for (int i = 0; i < k; i++) sum += a[i];

    int bestSum = sum;
    int bestIndex = 0;

    for (int i = k; i < n; i++) {
        sum += a[i] - a[i - k];  // slide window
        if (sum < bestSum) {  
            bestSum = sum;  
            bestIndex = i - k + 1;
        }
    }

    cout << bestIndex + 1;
    return 0;
}
