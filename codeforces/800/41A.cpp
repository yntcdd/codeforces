#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;

    cin >> s >> t;

    string copys = s;

    for (int i = 0; i < s.size(); i++){
        s[i] = copys[copys.size() - 1 - i];
    }

    if (s == t) {
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}