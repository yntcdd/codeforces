#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int soldiers[n] = {};

    for (int i = 0; i < n; i++) {
        cin >> soldiers[i];
    }
    int smallest = soldiers[0];
    int biggest = soldiers[n - 1];
    int minIndex = 0, maxIndex = n - 1;

    for (int i = 0; i < n; i++) {
        if (soldiers[i] <= smallest && i > minIndex) {
            smallest = soldiers[i];
            minIndex = i;
        }
    }
    for (int i = n - 1; i > -1; i--) {
        if (soldiers[i] >= biggest && i < maxIndex) {
            biggest = soldiers[i];
            maxIndex = i;
        }
    }
    maxIndex++;
    minIndex++;
    // cout << "Maxindex: " << maxIndex << "  Minindex: " << minIndex << "  Biggest: " << biggest << " Smallest: " << smallest << endl;
    if (maxIndex > minIndex) {
        cout << maxIndex - 1 + n - minIndex - 1;
    } else {
        cout << maxIndex - 1 + n - minIndex;
    }

    return 0;
}