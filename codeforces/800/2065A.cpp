#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string result = s;

        result.erase(result.size() - 2);

        result += "i";

        cout << result << endl;
    }

    return 0;
}