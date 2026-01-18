#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    stack<int> st;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            int left_idx = st.top();
            st.pop();

            if (i + 1 < n && s[i + 1] == '(' && left_idx > 0) {
                found = true;
                break;
            }
        }
    }

    if (found) {
        cout << n - 2 << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}