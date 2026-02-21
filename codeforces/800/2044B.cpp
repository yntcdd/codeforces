#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        string a;
        cin >> a;

        string s = "";
        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] == 'q') {
                s += 'p';
            } else if (a[i] == 'p') {
                s += 'q';
            } else {
                s += a[i];
            }
        }

        cout << s << endl;
    }

    return 0;
}