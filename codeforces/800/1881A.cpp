#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int time =  -1;
        bool found = false;
        for (int i = 0; i < 6; i++) {
            if (x.find(s) != string::npos) {
                found = true;
                time = i;
                break;
            }
            x += x;
        }

        cout << time << endl;
    }

    return 0;
}