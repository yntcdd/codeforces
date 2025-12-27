#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[50];  // n ≤ 50 according to problem statement :contentReference[oaicite:2]{index=2}
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);

        bool ok = true;
        for(int i = 1; i < n; i++){
            if(a[i] - a[i-1] > 1){
                ok = false;
                break;
            }
        }

        if(ok) cout << "YES\n";
        else    cout << "NO\n";
    }
    return 0;
}
