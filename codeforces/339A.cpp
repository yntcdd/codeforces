#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s;

    cin >> s; 

    int nums[(s.size() + 1) / 2];
    
    for (int i = 0; i < (s.size() + 1) / 2; i++) {
        nums[i] = s[i*2] - '0';    
    }

    int n = sizeof(nums) / sizeof(nums[0]);

    sort(nums, nums + n);

    string news;

    news += nums[0] + '0';
    for (int i = 1; i < n; i++) {
        news += '+';
        news += nums[i] + '0';
    }

    cout << news;

    return 0;
}