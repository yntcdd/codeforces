#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string word;
    string word2;

    cin >> word;
    cin >> word2;

    for (int i = 0; i < word.size(); i++) {
            word[i] = toupper(word[i]); 
            word2[i] = toupper(word2[i]); 
    }
    
    if (word == word2) {
        cout << 0;
    } 
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < word.size(); i++) {
        char character = word[i];
        char character2 = word2[i];

        int it = alphabet.find(character);
        int it2 = alphabet.find(character2);
        if (it > it2) {
            cout << 1;
            break;
        } else if (it < it2) {
            cout << -1;
            break;
        }
    }

    return 0;
}