#include <iostream>
#include <string>

using namespace std;

int main() {

    int year;

    cin >> year;

    bool distinct = false;

    for (int i = 0; i < 1000; i++) {
        year++;
        int y = (year - (year % 1000)) / 1000;
        int e = (year - y * 1000 - (year % 100)) / 100;
        int a = (year - y * 1000 - e * 100 - (year % 10)) / 10;
        int r = year % 10;
        if (y != e && y != a && y != r && e != a && e != r && a != r) {
            distinct = true;
            break;
        }
    }

    cout << year;

    return 0;
}