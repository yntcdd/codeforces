#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    ifstream fin("diamond.in");
    ofstream fout("diamond.out");

    int n, k;
    fin >> n >> k;

    int diamonds[n];

    for (int i = 0; i < n; i++) {
        fin >> diamonds[i];
    }

    sort(diamonds, diamonds + n);

    int max_diamonds = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        while (diamonds[right] - diamonds[left] > k) {
            left++;
        }
        max_diamonds = max(max_diamonds, right - left + 1);
    }

    fout << max_diamonds << endl;

    return 0;
}
