#include <iostream>
#include <string>

using namespace std;

int main() {

    string word;

    cin >> word;

    for (int i = 0; i < word.size(); i++) {
        if (word[0] > 90) {
            word[0] -= 32;
        }
        if (word[i] < 91 && i != 0) {
            word[i] += 32;
        }
    }

    cout << word;

    return 0;
}