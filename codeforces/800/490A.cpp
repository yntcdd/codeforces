#include <iostream>

using namespace std;

int main() {

    int n; 
    cin >> n;
    int one = 0;
    int two = 0;
    int three = 0;
    int ones[n] = {};
    int twos[n] = {};
    int threes[n] = {};
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 3) {
            three++;
            threes[three - 1] = i + 1;
        } else if (x == 2) {
            two++;
            twos[two - 1] = i + 1;
        } else if (x == 1) {
            one++;
            ones[one - 1] = i + 1;

        }
    }

    int minimum = one;

    if (two < minimum) minimum = two;
    if (three < minimum) minimum = three;

    cout << minimum << endl;
    for (int i = 0; i < minimum; i++) {
        cout << ones[i] << " " << twos[i] << " " << threes[i] << endl;
    }

    return 0;
}