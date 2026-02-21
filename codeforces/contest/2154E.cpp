#include <iostream>
#include <algorithm> 
#include <cmath>

using namespace std;

int main() {

    int t;

    cin >> t;
    int nums[t] = {};

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int ints[n] = {};

        for (int j = 0; j < n; j++) {
            cin >> ints[j]; 
        }

        int maxNum = *max_element(ints, ints + n);

        for (int j = 0; j < n; j++) {
            if ((j + 1) % 2 == 0) {
                // if (ints[j] < ints[j+1]) {
                //     ints[j] = maxNum;
                //     if (ints[j] == ints[j+1]) {
                //         ints[j+1] -= 1;
                //         nums[i]++;
                //     }
                // } else {
                //     continue;
                // }
                ints[j] == maxNum;
                // if (ints[j] != n - 1){
                //     if (ints[j] == ints[j+1]) {
                //         ints[j+1] -= 1;
                //         nums[i]++;
                //     }
                // }
            }
        }
        for (int j = 0; j < n; j++) {
            // if (j != n - 1) {
            //     if ((j+1) % 2 != 0) {
            //         if (ints[j] > ints[j+1]) {
            //             int x = ints[j] - ints[j+1] + 1;
            //             nums[i] += x;
            //             ints[j] -= x;
            //         } else {
            //             continue;
            //         }
            //     }
            // }
            if ((j+1) % 2 != 0) {
                if (ints[j] > ints[j+1]) {
                    ints[j] -= 1;
                    nums[i]++;
                }
            }
        }
    }

    for (int i = 0; i < t; i++) {
        cout << nums[i] << endl;
    }

    return 0;
}