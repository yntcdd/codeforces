#include <iostream>
#include <string>

using namespace std;
//nodemon --watch 59A.cpp -e cpp -x "g++ 59A.cpp -o main && ./main"   

int main() {
    string word;

    cin >> word;

    int capital = 0;
    int lowercase = 0;

    for (int i = 0; i < word.size(); i++) {
        if (word[i] > 90) {
            lowercase += 1;
        } else {
            capital += 1;
        }
    }
    if (capital > lowercase) {
        for (int i = 0; i < word.size(); i++) {
            if (word[i] > 90) {
                word[i] = word[i] - 32;
            }
        }
    } else {
        for (int i = 0; i < word.size(); i++) {
            if (word[i] <= 90) {
                word[i] = word[i] + 32;
            }
        }
    }

    cout << word;

    return 0;
}