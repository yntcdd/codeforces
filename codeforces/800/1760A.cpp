#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int nums[3] = {};

        cin >> nums[0] >> nums[1] >> nums[2]; 

        sort(nums, nums+3);
        cout << nums[1] << endl;
    }

    return 0;
}