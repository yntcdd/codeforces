
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    int t;
 
    cin >> t;
 
    while (t--) {
        string word;
        for (int i = 0; i < 64; i++) {
            char x;
            cin >> x;
 
            if (x != '.') {
                word += x;
            }
        }
 
        cout << word << endl;
    }
 
    return 0;
}