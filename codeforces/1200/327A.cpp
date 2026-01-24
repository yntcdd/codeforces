#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];
    int totalOnes = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) totalOnes++;
    }
    
    // If all are 1s, flipping any non-empty segment will reduce count by at least 1
    if (totalOnes == n) {
        cout << totalOnes - 1 << endl;
        return 0;
    }
    
    int cur = 0, bestGain = -1e9;
    
    for (int i = 0; i < n; i++) {
        int val = (a[i] == 0 ? 1 : -1);
        cur = max(val, cur + val);
        bestGain = max(bestGain, cur);
    }
    
    cout << totalOnes + bestGain << endl;
    return 0;
}
