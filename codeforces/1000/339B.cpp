#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long tasks[100000]; // m ≤ 10^5 according to the problem
    for (int i = 0; i < m; i++) {
        cin >> tasks[i];
    }

    long long current = 1;
    long long time = 0;

    for (int i = 0; i < m; i++) {
        if (tasks[i] >= current) {
            time += tasks[i] - current;
        } else {
            time += (n - current) + tasks[i];
        }
        current = tasks[i];
    }

    cout << time << "\n";
    return 0;
}
