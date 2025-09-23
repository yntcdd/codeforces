#include <iostream>

using namespace std;

int main() {
    int i;
    int j;
    
    
    for (int k = 0; k < 25; k++) {
        int id;
        cin >> id;
        if (id != 0) {
            if ((k+1) % 5 != 0) {
                i = (k+1) / 5 + 1;
                j = (k+1) % 5;
            } else {
                i = (k+1) / 5;
                j = 5;
            }
        }
    }
    
    int moves = 0;
    if (i >= 3) {
        moves += i - 3;
    } else {
        moves += 3 - i;
    }
    if (j >= 3) {
        moves += j - 3;
    } else {
        moves += 3 - j;
    }
    
    cout << moves;
    
    return 0;
}