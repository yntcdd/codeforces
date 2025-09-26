#include <iostream>

using namespace std;

int main() {

    int stops;
    int greatest = 0;
    int people = 0;

    cin >> stops;

    for (int i = 0; i < stops; i++) {
        int exit, enter;
        
        cin >> exit >> enter;
        people = people - exit + enter;
        if (people > greatest) {
            greatest = people;
        }
    }

    cout << greatest;

    return 0;
}