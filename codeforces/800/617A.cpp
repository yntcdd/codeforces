#include <iostream>

using namespace std;

//nodemon --watch 617A.cpp -e cpp -x "g++ 617A.cpp -o main && ./main"   

int main() {
    int steps;
    cin >> steps;

    if (steps % 5 == 0) {
        cout << steps / 5 << endl;
    } else {
        cout << steps / 5 + 1 << endl;
    }

    return 0;
}