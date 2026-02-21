#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> store;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;     
            string d = ""; 

            for (int j = 0; j < 4; j++) {
                if (s[j] == '#') {
                    d += to_string(j + 1);
                    d += " ";
                }
            }
            store.push_back(d);
        }

        for (int i = n - 1; i >= 0; i--) {
            for (char c : store[i]) {
                cout << c;
            }
        }
        cout << endl;
    }
}
