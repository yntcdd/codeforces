#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    // Number of days Vasya can wear different-colored socks:
    int diffDays = min(a, b);
    // After that, the remaining socks of the dominant color are:
    int remaining = max(a, b) - diffDays;
    // Days he can wear same-colored socks = remaining/2 (because each day uses two socks)
    int sameDays = remaining / 2;
    cout << diffDays << " " << sameDays << "\n";
    return 0;
}
