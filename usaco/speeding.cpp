#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream fin("speeding.in");
    ofstream fout("speeding.out");

    int n, m;
    fin >> n >> m;

    int road_length[n];
    int speed_limit[n];
    int bessie_length[m];
    int bessie_speed[m];

    for (int i = 0; i < n; i++) {
        fin >> road_length[i] >> speed_limit[i];
    }
    for (int i = 0; i < m; i++) {
        fin >> bessie_length[i] >> bessie_speed[i];
    }

    int counter_road = 0;
    int counter_r = 0;
    int counter_bessie = 0;
    int counter_b = 0;
    int maximum = 0;

    for (int i = 0; i < 100; i++) {
        if (counter_road == road_length[counter_r]) {
            counter_road = 0;
            counter_r++;
        }
        if (counter_bessie == bessie_length[counter_b]) {
            counter_bessie = 0;
            counter_b++;
        }

        int difference = bessie_speed[counter_b] - speed_limit[counter_r];
        if (difference > maximum) {
            maximum = difference;
        }

        counter_road++;
        counter_bessie++;
    }

    fout << maximum << endl;
    return 0;
}
