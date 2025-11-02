#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int elo;
        cin >> elo;

        if (elo >= 1900) {
            cout << "Division 1" << endl;
        } else if (elo >= 1600) {
            cout << "Division 2" << endl;
        }  else if (elo >= 1400) {
            cout << "Division 3" << endl;
        }  else {
            cout << "Division 4" << endl;
        } 
    }

    return 0;
}