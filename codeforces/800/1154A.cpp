#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    vector<long long> v = {x1, x2, x3, x4};
    sort(v.begin(), v.end());
    // The largest one is a + b + c
    long long sum3 = v[3];
    long long a = sum3 - v[0];
    long long b = sum3 - v[1];
    long long c = sum3 - v[2];
    cout << a << " " << b << " " << c << "\n";
    return 0;
}
