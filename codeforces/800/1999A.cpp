#include <iostream> 

using namespace std;

int main() {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        int a = x/10;
        int b = x-a*10;
        cout << a + b << endl;
    }

    return 0;
}