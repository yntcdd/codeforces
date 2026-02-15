#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream cin("gymnastics.in");
    ofstream cout("gymnastics.out");

    int k, n;
    cin >> k >> n;

    int one[n * k];

    for (int i = 0; i < n * k; i++) {
        cin >> one[i];
    }

    int working_pairs = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (j == i) continue;

            int works = 0;

            for (int g = 0; g < k; g++) {

                int where_i = -1;
                int where_j = -1;

                for (int h = g * n; h < (g + 1) * n; h++) {

                    if (one[h] == i + 1) where_i = h;
                    if (one[h] == j + 1) where_j = h;
                }

                if (where_j > where_i) works++;
                else works--;
            }

            if (works == k) {
                working_pairs++;
            }
        }
    }

    cout << working_pairs << endl;

    return 0;
}
