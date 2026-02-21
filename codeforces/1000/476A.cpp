#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int k = (n + 1) / 2; 

    while (k <= n) {
        if (k % m == 0) {
            cout << k << "\n";
            return 0;
        } 
        k++;
    }

    cout << -1 << "\n";
    return 0;
}
