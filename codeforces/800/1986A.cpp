#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    std::cin >> t;
 
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
 
        int small;
        int large;
 
        if (a <= b && a <= c) {
            small = a;
            large = (b >= c) ? b : c;
        } else if (b <= a && b <= c) {
            small = b;
            large = (a >= c) ? a : c;
        } else {
            small = c;
            large = (a >= b) ? a : b;
        }
 
        cout << large - small << "\n";
    }
 
    return 0;
}