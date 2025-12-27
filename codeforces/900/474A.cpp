#include <iostream>
#include <string>

using namespace std;

int main() {

    char direction;

    cin >> direction;

    string word;
    cin >> word;

    string alphabet = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (int i = 0; i < word.size(); i++) {
        for (int j = 0; j < alphabet.size(); j++) {
            if (alphabet[j] == word[i]) {
                if (direction == 'R')
                    cout << alphabet[j - 1];
                else
                    cout << alphabet[j + 1];
            }   
        }
    }

    return 0;
}