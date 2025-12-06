#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int s1, s2, s3, s4;

        cin >> s1 >> s2 >> s3 >> s4;

        int skills[4] = {s1, s2, s3, s4};

        sort(skills, skills + 4);

        if (skills[3] == s1 && skills[2] == s2 || skills[3] == s2 && skills[2] == s1 || skills[3] == s4 && skills[2] == s3 || skills[3] == s3 && skills[2] == s4) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

    }

    return 0;
}