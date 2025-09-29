#include <iostream>
#include <string>

using namespace std;

int main() {

    int length;

    cin >> length;

    string words = "I hate";
    if (length == 1) {
        words += " it";
    }
    for (int i = 2; i < length + 1; i++) {
        if (i % 2 == 0) {
            words += " that I love";
        } else {
            words += " that I hate";
        }
        if (i == length) {
            words += " it";
        }
    }

    cout << words;
    return 0;
}