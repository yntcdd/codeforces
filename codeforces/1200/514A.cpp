#include <iostream>
#include <string>

using namespace std;

int main() {

    string word;

    cin >> word;

    for (int i = 0; i < word.size(); i++) {
        if (word[i] == '5') {
            word[i] = '4';
        } 
        if (word[i] == '6') {
            word[i] = '3';
        }
        if (word[i] == '7') {
            word[i] = '2';
        }
        if (word[i] == '8') {
            word[i] = '1';
        }
        if (word[i] == '9' && i != 0) {
            word[i] = '0';
        }
    }
    cout << word;

    return 0;
}