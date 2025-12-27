#include <iostream>
#include <string>

using namespace std;

int main() {

    char chars[1000] = {};
    
    bool finished = false;
    int count = 0;

    for (int i = 0; i < 1000; i++) {
        cin >> chars[i];
        count = i + 1;
        if (chars[i] == '}') {
            break;
        }
    }
    char distincts[count] = {};
    int counter = 0;

    for (int i = 0; i < count; i++) {
        if (chars[i] != '{' && chars[i] != '}' && chars[i] != ',') {
            bool seen = false;
            for (int j = 0; j < count; j++) {
                if (chars[i] == distincts[j]) {
                    seen = true;
                }
            }
            if (!seen) {
                distincts[i] = chars[i];
                counter++;
            }
        }
    }

    cout << counter;

    return 0;
}