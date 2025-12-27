#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, r;
    cin >> k >> r;
    for(int n = 1; ; ++n) {
        int cost = n * k;
        if (cost % 10 == 0 || cost % 10 == r) {
            cout << n << "\n";
            break;
        }
    }
    return 0;
}
