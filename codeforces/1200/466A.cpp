#include <iostream>
using namespace std;

int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (m * a <= b) {
        cout << n * a << endl;
    } else {
        int fullBundles = n / m;
        int remainder = n % m;
        int costFull = fullBundles * b;
        int costRemainder = min(remainder * a, b);
        cout << costFull + costRemainder << endl;
    }

    return 0;
}
