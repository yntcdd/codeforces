#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int a;
        cin >> a;

        string word;
        cin >> word;

        char bestChar = word[a-1];

        int num = 0;

        for (int j = 0; j < a; j++) {
            if (word[j] != bestChar) {
                num++;
            }
        }
        cout << num << endl;
    }

    return 0;
}
