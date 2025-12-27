#include <iostream>
#include <string>

using namespace std;

int main() {

    string word;
    string result = "";

    cin >> word;

    for (int i = 0; i < word.size(); i++) {
        char c = word[i];
        if (
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || 
            word[i] == 'O' || word[i] == 'U' || word[i] == 'Y' ||
            word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
            word[i] == 'o' || word[i] == 'u' || word[i] == 'y'
        ) {
            continue;
        } else if (word[i] <= 90) {
            c = word[i] + 32;
        }
        
        result.push_back('.');
        result.push_back(c);
    }

    cout << result;

    return 0;
}