#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string word;
        cin >> word;
        bool repeated = false;
        for (int i = 0; i < word.size(); i++) {
            bool notfinishedyet = true;
            for (int j = i+1; j < word.size(); j++) {
                if (notfinishedyet) {
                    if (word[i] != word[j]) {
                        notfinishedyet = false;
                    }
                } else {
                    if (word[j] == word[i]) {
                        repeated = true;
                        break;
                    }
                }
            }
            if (repeated) {
                break;
            }
        }  
        if (repeated) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}