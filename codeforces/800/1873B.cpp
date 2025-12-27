#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int nums[n] = {};
        int smallI = 0;
        for (int j = 0; j < n; j++) {
            cin >> nums[j];

            if (nums[j] < nums[smallI]) {
                smallI = j;
            }
        }
        nums[smallI]++;
        int product = 1;
        for (int j = 0; j < n; j++) {
            product *= nums[j];
        }
        cout << product << endl;
    }

    

}