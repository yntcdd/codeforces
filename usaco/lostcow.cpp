#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    ifstream fin("lostcow.in");
    ofstream fout("lostcow.out");

    int x, y;
    fin >> x >> y; // read from file

    long long distance = 0; // long long in case of big numbers
    long long last_location = x;

    for (int i = 0; i < 64; i++) { // safer to use 64 instead of 20
        long long location;
        if (i % 2 == 0) {
            location = x + (1LL << i); // faster integer power of 2
        } else {
            location = x - (1LL << i);
        }

        distance += abs(location - last_location);

        if ((x < y && location >= y) || (x > y && location <= y)) {
            distance -= abs(location - y);
            break;
        }

        last_location = location;
    }

    fout << distance << endl; // write to file

    return 0;
}
