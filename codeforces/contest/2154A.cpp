#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;

    cin >> t;
    int protect[t] = {};


    for (int i = 0; i < t;i++) {
        int n;
        int k;
        string binary;
        cin >> n >> k;
        cin >> binary;

        // if (binary[0] == '1') {
        //     protect[i]++;
        // }

        for (int j = 0; j < binary.size(); j++) {
            if (binary[j] == '1' && j > k - 2) {
                bool has1 = false;
                for (int l = j - k + 1; l < j; l++) {
                    if (binary[l] == '1') {
                        has1 = true;
                        break;
                    }
                }
                if (has1) {
                    continue;
                } else {
                    protect[i]++;
                }
            } else if (binary[j] == '1') {
                bool has1 = false;
                for (int l = 0; l < j; l++) {                    
                    if (binary[l] == '1') {
                        has1 = true;
                        break;
                    }
                }
                if (has1) {
                    continue;
                } else {
                    protect[i]++;
                }
            }
        }
        
    }
    for (int i =0; i < t; i++) {
        cout << protect[i] << endl;
    }

    return 0;
}