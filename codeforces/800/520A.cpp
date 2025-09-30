#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;

    string word;
    cin >> word;

    if (n < 26) {
        cout << "NO\n";
        return 0;
    }

    set<char> letters;
    for (char ch : word) {
        letters.insert(toupper(ch));
    }
    
    if (letters.size() == 26) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
