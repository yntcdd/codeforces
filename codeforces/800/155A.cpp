#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(n == 0){
        cout << 0 << "\n";
        return 0;
    }

    int best = a[0];
    int worst = a[0];
    int amazing_count = 0;

    for(int i = 1; i < n; i++){
        if(a[i] > best){
            amazing_count++;
            best = a[i];
        }
        else if(a[i] < worst){
            amazing_count++;
            worst = a[i];
        }
    }

    cout << amazing_count << "\n";
    return 0;
}
