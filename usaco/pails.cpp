#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    ifstream fin("pails.in");
    ofstream fout("pails.out");

    int x, y, m;
    fin >> x >> y >> m;

    int most = 0;

    for (int i = 0; i <= m / y; i++) {
        int how = (m - y * i) / x * x + y * i;
        if (how <= m) {
            most = max(most, how);
        }
    }

    fout << most << endl;

    return 0;
}
