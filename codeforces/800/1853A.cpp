#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool issorted = true;
        int smallest = 1000000000;

        int last_num;
        cin >> last_num;

        for (int i = 1; i < n; i++) {
            int a;
            cin >> a;

            if (a < last_num) {
                issorted = false;
            }
            int esp = a - last_num;
            if (a == last_num) {
                esp = 1;
            }
            if (esp % 2 != 0) {
                esp += 1;
            } else {
                esp += 2;
            }
            if (esp / 2 < smallest) {
                smallest = esp / 2;
            }
            last_num = a;
        }  

        if (issorted) {
            cout << smallest << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}