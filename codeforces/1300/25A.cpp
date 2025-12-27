#include <iostream>

using namespace std;

int main() {

    int n;
    int odd = 0;
    int even = 0;

    cin >> n;

    int nums[n] = {};

    for (int i =0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    if (even > odd) {
        for (int i =0; i < n; i++) {
            if (nums[i] % 2 != 0) {
                cout << i+1;
                break;
            }
        }
    } else {
        for (int i =0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                cout << i+1;
                break;
            }
        }
    }

    return 0;
}