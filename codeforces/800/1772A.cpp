#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;

    cin >> t;

    while (t--) {
        string word;

        cin >> word;

        int one = word[0] - '0';
        int two = word[2] - '0';

        int sum = one + two;
        
        cout << sum << endl;
    }

    return 0;
}