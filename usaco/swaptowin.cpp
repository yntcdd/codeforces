#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s[1005];
string ops[2005]; 

void solve() {
    int n, m;
    cin >> n >> m;
    
    string t;
    cin >> t;
    
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    int ops_count = 0;
    
    for (int i = 0; i < m; i++) {
        if (s[0][i] == t[i]) continue;
        
        bool found = false;
        int found_r = -1;
        int found_c = -1;
        
        for (int r = 0; r < n && !found; r++) {
            int start_c = (r == 0) ? i + 1 : 0;
            
            for (int c = start_c; c < m && !found; c++) {
                if (s[r][c] == t[i]) {
                    found_r = r;
                    found_c = c;
                    found = true;
                }
            }
        }
        
        if (found_r == 0) {
            ops[ops_count++] = "1 1 " + to_string(i + 1) + " " + to_string(found_c + 1);
            swap(s[0][i], s[0][found_c]);
            
        } else if (found_c == i) {
            ops[ops_count++] = "2 1 " + to_string(found_r + 1) + " " + to_string(i + 1);
            swap(s[0][i], s[found_r][i]);
            
        } else {
            ops[ops_count++] = "1 " + to_string(found_r + 1) + " " + to_string(found_c + 1) + " " + to_string(i + 1);
            swap(s[found_r][found_c], s[found_r][i]);
            
            ops[ops_count++] = "2 1 " + to_string(found_r + 1) + " " + to_string(i + 1);
            swap(s[0][i], s[found_r][i]);
        }
    }
    
    cout << ops_count << "\n";
    for (int i = 0; i < ops_count; i++) {
        cout << ops[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t_cases;
    if (cin >> t_cases) {
        while (t_cases--) {
            solve();
        }
    }
    return 0;
}