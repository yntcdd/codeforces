#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int nums[101] = {};

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            nums[x]++; 
        }

        for (int i = 0; i <= 100; i++) {
            if (nums[i] == 0) {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
