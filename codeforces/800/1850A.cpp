#include <algorithm>
#include <iostream>
using namespace std;

int main() {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int nums[3] = {};

        cin >> nums[0] >> nums[1] >> nums[2];

        sort(nums, nums+3);

        if (nums[1] + nums[2] >= 10) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}