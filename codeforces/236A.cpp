#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    cin >> name;
    
    char letters[name.size()] = {};
    int size = 0;

    for (int i = 0; i < name.size(); i++) {
        bool distinct = true;
        for (int j = 0; j < name.size(); j++) {
            if (letters[j] == name[i]) {
                distinct = false;
            }
        }
        if (distinct) {
            letters[i] = name[i];
            size++;
        }
    }

    if (size % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}