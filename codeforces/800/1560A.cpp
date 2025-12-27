#include <iostream>

using namespace std;

int main() {

    int t;

    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int x;

        cin >> x;

        int a = 0;
        for (int j = 1; j < x + 1; j++) {
            a++;
            if (a % 3 == 0 || a % 10 == 3) {
                a++;
            }
            if (a % 3 == 0 || a % 10 == 3) {
                a++;
            }
        }
        cout << a << endl;
    }

    return 0;
}