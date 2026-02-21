#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    string s;
    cin >> s;

    string q[n] = {};
    int a[n] = {};

    for (int i = 0; i < n - 1; i++) {
        q[i] = s.substr(i, 2);
        a[i] = 0;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (q[i] == q[j]) {
                a[i]++;
            }
        }
    }

    int max_count = a[0];
    int max_index = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > max_count) {
            max_count = a[i];
            max_index = i;
        }
    }

    cout << q[max_index] << endl;

    return 0;
}