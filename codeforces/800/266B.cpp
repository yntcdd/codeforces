#include <iostream>
#include <string>

using namespace std;

int main() {

    int n, t;
    string order;

    cin >> n >> t;
    cin >> order;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n; j++) {
            if (order[j] == 'B' && order[j + 1] == 'G') {
                order[j] = 'G';
                order[j + 1] = 'B';
                j++;
            }
        }
    }

    cout << order;

    return 0;
}