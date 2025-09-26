#include <iostream>
#include <string>

using namespace std;

int main() {
    string number;

    cin >> number;
    int lucky = 0;
    for (int i = 0; i < number.size(); i++) {
        if (number[i] == '4' || number[i] == '7') {
            lucky++;
        }
    }
    string luckys = to_string(lucky);
    string luck = "YES";
    for (int i = 0; i < luckys.size(); i++) {
        if (luckys[i] != '4' && luckys[i] != '7') {
            luck = "NO";
        }
    }
    cout << luck;

    return 0;
}