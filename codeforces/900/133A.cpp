#include <iostream>
#include <string>

using namespace std;

int main() {

    string word;

    cin >> word;

    string produce = "NO";
    for (int i = 0; i < word.size(); i++) {
        if (word[i] == 'H' || word[i] == 'Q' || word[i] == '9') {
            produce = "YES";
            break;
        }
    }

    cout << produce;

    return 0;
}