#include <iostream>
#include <string>

using namespace std;

int main() {
    int statements;

    cin >> statements;
    string operation;
    
    int finale = 0;
    
    for (int i = 0; i < statements; i++) {
        cin >> operation;
        if (operation == "X++" || operation == "++X") {
            finale++;
        } 
        else if (operation == "X--" || operation == "--X") {
            finale--;
        }
    }
    cout << finale;
    
    return 0;
}