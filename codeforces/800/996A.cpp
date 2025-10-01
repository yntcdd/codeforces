#include <iostream>

using namespace std;

int main() {

    int money;
    int bills = 0;

    cin >> money;

    if (money >= 100) {
        int type = money / 100;
        money -= type * 100;
        bills += type;
    }
    if (money >= 20) {
        int type = money / 20;
        money -= type * 20;
        bills += type;
    }
    if (money >= 10) {
        int type = money / 10;
        money -= type * 10;
        bills += type;
    }
    if (money >= 5) {
        int type = money / 5;
        money -= type * 5;
        bills += type;
    }
    if (money >= 1) {
        int type = money / 1;
        money -= type * 1;
        bills += type;
    }

    cout << bills;

    return 0;
}