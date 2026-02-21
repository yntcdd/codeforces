#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int smallest = 10000;
        int lasta, lastb;
        cin >> lasta >> lastb;
        for (int i = 1; i < 4; i++) {
            int a, b;
            cin >> a >> b;
            int distance = sqrt((a - lasta)*(a - lasta) + 
                                (b - lastb)*(b - lastb));

            if (distance < smallest) {
                smallest = distance;
            }
        }

        cout << smallest * smallest << endl;
    }

    return 0;
}