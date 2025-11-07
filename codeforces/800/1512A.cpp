#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int common;
        if(a[0] == a[1]) {
            common = a[0];
        } else {
            // first two differ
            if(a[0] == a[2]) {
                // a[1] is odd one
                cout << 2 << "\n";
                continue;
            } else {
                // a[0] is odd one
                cout << 1 << "\n";
                continue;
            }
        }
        // common is identified
        for(int i = 0; i < n; i++){
            if(a[i] != common){
                cout << i+1 << "\n";
                break;
            }
        }
    }
    return 0;
}
