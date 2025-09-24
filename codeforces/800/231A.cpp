#include <iostream>

using namespace std;

int main() {
    int problems;

    cin >> problems;
    
    int solutions = 0;
    int num;
    string solution;
    
    for (int i = 0; i < problems; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c > 1) {
            solutions++;
        }
    }
    cout << solutions;
    
    return 0;
}