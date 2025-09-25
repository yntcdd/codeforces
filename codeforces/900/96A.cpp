#include <iostream>
#include <string>

using namespace std;

int main() {

    string players;
    int counter = 1;
    string dangerous = "NO";

    cin >> players;
    
    for (int i = 0; i < players.size(); i++) { 
        if (players[i] == players[i + 1]) {
            counter++;
            if (counter >= 7) {
                dangerous = "YES";
                break;
            }
        } else {
            counter = 1;
        }
    }

    cout << dangerous;

    return 0;
}