#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    string result;
    bool inWord = false;

    for (int i = 0; i < word.size(); ) {
        if (i + 2 < word.size() && word.substr(i, 3) == "WUB") {
            if (inWord) {
                result += ' ';
                inWord = false;
            }
            i += 3;
        } else {
            result += word[i];
            inWord = true;
            i++;
        }
    }

    // remove trailing space if any
    if (!result.empty() && result.back() == ' ')
        result.pop_back();

    cout << result;
    return 0;
}
