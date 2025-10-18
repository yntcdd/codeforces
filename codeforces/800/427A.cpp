#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int active = 0;
    int crimes = 0;

    for (int i = 0; i < n; i++) {
        int person;
        cin >> person;
        
        if (person == -1) {
            if (active == 0) {
                crimes++;
            } else {
                active--;
            }
        } else {
            active += person;
        }
    }
    cout << crimes;

    return 0;
}