#include <iostream>

using namespace std;

//nodemon --watch 546A.cpp -e cpp -x "g++ 546A.cpp -o main && ./main"   

int main() {
    int first;
    int initial;
    int number;
    int money = 0;

    cin >> first;
    cin >> initial;
    cin >> number;

    for (int i = 0; i < number + 1; i++) {
        money += first * i;
    }

    cout << money - initial;

    return 0;
}