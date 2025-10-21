#include <iostream>

using namespace std;

int main() {

    int n;
    int k;
    int l;
    int c;
    int d;
    int p;
    int nl;
    int np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int e = k * l;
    int f = e / nl;
    int g = c * d;
    int h = p / np;
    int minVal = f;

    if (g < minVal) minVal = g;
    if (h < minVal) minVal = h;

    cout << minVal / n;
    return 0;
}