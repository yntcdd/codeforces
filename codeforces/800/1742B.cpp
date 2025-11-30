#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_set<int> seen;

        bool hasDuplicate = false;

        for (int i = 0; i < n; i++) {
            if (seen.count(a[i])) {
                hasDuplicate = true;
                break;
            }
            seen.insert(a[i]);
        }

        if (hasDuplicate) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
