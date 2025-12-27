#include <iostream>

using namespace std;

int main() {
   int gamesplayed;
   string games;
   
   cin >> gamesplayed >> games;

   int anton = 0;
   int danik = 0;

    for (int i = 0; i < gamesplayed; i++) {
        if (games[i] == 'D') {
            danik++;
        } else {
            anton++;
        }
    }

    if (danik > anton) {
        cout << "Danik";
    } else if (anton > danik) {
        cout << "Anton";
    } else {
        cout << "Friendship";
    }
    return 0;
} 