#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sides = 0;

    for (int i = 0; i < n; i++) {
        string shape;
        cin >> shape;
        if (shape == "Icosahedron") {
            sides += 20;
        } else if (shape == "Dodecahedron") {
            sides += 12;
        } else if (shape == "Octahedron") {
            sides += 8;
        } else if (shape == "Cube") {
            sides += 6;
        } else {
            sides += 4;
        }
    } 
    cout << sides;

    return 0;
}