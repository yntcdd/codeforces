#include <iostream>

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
        int maxNum = ints[0];


        for (int j = 0; j < n; j++) {
            if (ints[j] > maxNum)
                maxNum = ints[j];
            
            if ((j + 1) % 2 == 0) {
                ints[j] = maxNum;
            }
        }
        for (int j = 0; j < n; j++) {
            bool isOdd = (j+1) % 2;
            if (isOdd) {
                if (j < n - 1) {
                    if (ints[j] >= ints[j+1]) {
                        int x = ints[j] - ints[j+1] + 1;
                        nums[i] += x;
                        ints[j] -= x;
                    }
                }
                if (j > 0) {
                    if (ints[j] >= ints[j-1]) {
                        int x = ints[j] - ints[j-1] + 1;
                        nums[i] += x;
                        ints[j] -= x;
                    }
                }
            }
        }
    }

    for (int i = 0; i < t; i++) {
        cout << nums[i] << endl;
    }

    return 0;
}