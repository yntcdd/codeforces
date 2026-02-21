#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int count0 = 0, count1 = 0;
    for(char c : s){
        if(c == '0') count0++;
        else if(c == '1') count1++; 
    }

    // The minimum length of the string after removals:
    int answer = abs(count0 - count1);
    cout << answer << "\n";

    return 0;
}
