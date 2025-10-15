#include <iostream>
#include <string>

using namespace std;

int main() {

    string word;

    cin >> word;

    string special = word;
    string uncap = word;

    bool first = false;
    int letters = 0;

    if (word[0] < 91) {
        first = true;
        letters++;
        uncap[0] += 32;
    } else {
        special[0] -= 32;
    }

    for (int i = 1; i < word.size(); i++) {
        if (word[i] < 91) {
            letters++;
            special[i] += 32;
            uncap[i] += 32;
        }
    }
    if (word.size() == letters) { 
        cout << uncap;
    } else if (first == false && letters == word.size() - 1) {
        cout << special;
    } else {
        cout << word;
    }

    return 0;
}