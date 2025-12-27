#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;

    // Combine guest and host
    string combined = guest + host;

    // Sort both strings
    sort(combined.begin(), combined.end());
    sort(pile.begin(), pile.end());

    // Compare
    if (combined == pile)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
