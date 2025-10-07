#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> database;

    while (n--) {
        string name;
        cin >> name;

        if (database[name] == 0) {
            cout << "OK" << endl;
        } else {
            cout << name << database[name] << endl;
        }
        database[name]++;
    }
}
