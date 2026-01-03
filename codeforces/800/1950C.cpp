#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int hour = (s[0] - '0') * 10 + (s[1] - '0');
        string min = s.substr(2, 3); // ":MM"

        if (hour == 0) {
            cout << setw(2) << setfill('0') << 12 << min << " AM\n";
        }
        else if (hour < 12) {
            cout << setw(2) << setfill('0') << hour << min << " AM\n";
        }
        else if (hour == 12) {
            cout << setw(2) << setfill('0') << 12 << min << " PM\n";
        }
        else {
            cout << setw(2) << setfill('0') << hour - 12 << min << " PM\n";
        }
    }
    return 0;
}
