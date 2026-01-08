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
        string s;
        cin >> s;

        int maxRun = 1;
        int curRun = 1;

        // scan for longest block of same characters
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]){
                curRun++;
            } else {
                curRun = 1;
            }
            maxRun = max(maxRun, curRun);
        }

        cout << (maxRun + 1) << "\n";
    }

    return 0;
}
