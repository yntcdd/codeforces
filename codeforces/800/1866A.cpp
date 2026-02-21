#include <iostream>
#include <cmath>

using namespace std;
 
int main() {

    int N;
    cin >> N;

    int smallest = 100000;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (abs(a) < abs(smallest)) {
            smallest = a;
        }
    }

    cout << abs(smallest) << endl;

    return 0;
}