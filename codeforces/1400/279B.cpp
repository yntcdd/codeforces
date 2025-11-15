#include <iostream>

using namespace std;

int main() {

    int n, t;
    cin >> n >> t;

    int books[n];
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }

    int left = 0;
    int sum = 0;
    int best = 0;

    for (int right = 0; right < n; right++) {
        sum += books[right];

        while (sum > t) {
            sum -= books[left];
            left++;
        }

        int length = right - left + 1;
        if (length > best) best = length;
    }

    cout << best << endl;

    return 0;
}
